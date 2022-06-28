/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <src/gen-py3/module/clients_wrapper.h>

namespace cpp2 {


folly::Future<apache::thrift::ClientBufferedStream<int32_t>>
PubSubStreamingServiceClientWrapper::returnstream(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_i32_from,
    int32_t arg_i32_to) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ClientBufferedStream<int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ClientBufferedStream<int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_returnstream, channel_);
  client->returnstream(
    rpcOptions,
    std::move(callback),
    arg_i32_from,
    arg_i32_to
  );
  return _future;
}

folly::Future<apache::thrift::ClientBufferedStream<int32_t>>
PubSubStreamingServiceClientWrapper::streamthrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ClientBufferedStream<int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ClientBufferedStream<int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_streamthrows, channel_);
  client->streamthrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ClientBufferedStream<int32_t>>
PubSubStreamingServiceClientWrapper::servicethrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ClientBufferedStream<int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ClientBufferedStream<int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_servicethrows, channel_);
  client->servicethrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ClientBufferedStream<int32_t>>
PubSubStreamingServiceClientWrapper::boththrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ClientBufferedStream<int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ClientBufferedStream<int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_boththrows, channel_);
  client->boththrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>
PubSubStreamingServiceClientWrapper::responseandstreamstreamthrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_responseandstreamstreamthrows, channel_);
  client->responseandstreamstreamthrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>
PubSubStreamingServiceClientWrapper::responseandstreamservicethrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_responseandstreamservicethrows, channel_);
  client->responseandstreamservicethrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>
PubSubStreamingServiceClientWrapper::responseandstreamboththrows(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_foo) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ResponseAndClientBufferedStream<int32_t,int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_responseandstreamboththrows, channel_);
  client->responseandstreamboththrows(
    rpcOptions,
    std::move(callback),
    arg_foo
  );
  return _future;
}

folly::Future<apache::thrift::ClientBufferedStream<int32_t>>
PubSubStreamingServiceClientWrapper::returnstreamFast(
    apache::thrift::RpcOptions& rpcOptions,
    int32_t arg_i32_from,
    int32_t arg_i32_to) {
  auto* client = static_cast<::cpp2::PubSubStreamingServiceAsyncClient*>(async_client_.get());
  folly::Promise<apache::thrift::ClientBufferedStream<int32_t>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<::thrift::py3::FutureCallback<apache::thrift::ClientBufferedStream<int32_t>>>(
    std::move(_promise), rpcOptions, client->recv_wrapped_returnstreamFast, channel_);
  client->returnstreamFast(
    rpcOptions,
    std::move(callback),
    arg_i32_from,
    arg_i32_to
  );
  return _future;
}

} // namespace cpp2
