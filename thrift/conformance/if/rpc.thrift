/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

include "thrift/annotation/thrift.thrift"

namespace cpp2 apache.thrift.conformance
namespace php apache_thrift
namespace py thrift.conformance.rpc
namespace py.asyncio thrift_asyncio.conformance.rpc
namespace py3 thrift.conformance
namespace java.swift org.apache.thrift.conformance

struct RpcTestCase {
  1: ClientInstruction clientInstruction;
  2: ClientTestResult clientTestResult;
  3: ServerInstruction serverInstruction;
  4: ServerTestResult serverTestResult;
}

struct Request {
  1: string data;
  2: optional i32 num;
}

struct Response {
  1: string data;
  2: optional i32 num;
}

exception UserException {
  1: string msg;
}

union ServerTestResult {
  1: RequestResponseBasicServerTestResult requestResponseBasic;
  2: RequestResponseDeclaredExceptionServerTestResult requestResponseDeclaredException;
}

union ClientTestResult {
  1: RequestResponseBasicClientTestResult requestResponseBasic;
  2: RequestResponseDeclaredExceptionClientTestResult requestResponseDeclaredException;
}

struct RequestResponseBasicServerTestResult {
  1: Request request;
}

struct RequestResponseDeclaredExceptionServerTestResult {
  1: Request request;
}

struct RequestResponseBasicClientTestResult {
  1: Response response;
}

struct RequestResponseDeclaredExceptionClientTestResult {
  // TODO(dokwon): Remove @thrift.Box after fixing incomplete type bug.
  @thrift.Box
  1: optional UserException userException;
}

union ClientInstruction {
  1: RequestResponseBasicClientInstruction requestResponseBasic;
  2: RequestResponseDeclaredExceptionClientInstruction requestResponseDeclaredException;
}

union ServerInstruction {
  1: RequestResponseBasicServerInstruction requestResponseBasic;
  2: RequestResponseDeclaredExceptionServerInstruction requestResponseDeclaredException;
}

struct RequestResponseBasicClientInstruction {
  1: Request request;
}

struct RequestResponseBasicServerInstruction {
  1: Response response;
}

struct RequestResponseDeclaredExceptionClientInstruction {
  1: Request request;
}

struct RequestResponseDeclaredExceptionServerInstruction {
  // TODO(dokwon): Remove @thrift.Box after fixing incomplete type bug.
  @thrift.Box
  1: optional UserException userException;
}

service RPCConformanceService {
  // =================== Conformance framework - Only for Server Tests ===================
  void sendTestCase(1: RpcTestCase testCase);
  ServerTestResult getTestResult();

  // =================== Conformance framework - Only for Client Tests ===================
  RpcTestCase getTestCase();
  void sendTestResult(1: ClientTestResult result);

  // =================== Request-Response ===================
  Response requestResponseBasic(1: Request req);
  void requestResponseDeclaredException(1: Request req) throws (
    1: UserException e,
  );
}
