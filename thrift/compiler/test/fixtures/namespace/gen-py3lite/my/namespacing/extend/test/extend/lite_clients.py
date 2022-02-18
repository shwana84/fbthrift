#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

import typing as _typing

import apache.thrift.metadata.lite_types as _fbthrift_metadata
import folly.iobuf as _fbthrift_iobuf
from thrift.py3lite.client import (
    AsyncClient as _fbthrift_py3lite_AsyncClient,
    SyncClient as _fbthrift_py3lite_SyncClient,
    Client as _fbthrift_py3lite_Client,
)
import thrift.py3lite.exceptions as _fbthrift_py3lite_exceptions
import thrift.py3lite.types as _fbthrift_py3lite_types
import py3lite_module_root.my.namespacing.extend.test.extend.lite_types
import py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata
import py3lite_module_root.my.namespacing.test.hsmodule.lite_types
import py3lite_module_root.my.namespacing.test.hsmodule.lite_clients


class ExtendTestService(_fbthrift_py3lite_Client["ExtendTestService.Async", "ExtendTestService.Sync"]):
    @staticmethod
    def __get_thrift_name__() -> str:
        return "extend.ExtendTestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata.gen_metadata_service_ExtendTestService()

    class Async(py3lite_module_root.my.namespacing.test.hsmodule.lite_clients.HsTestService.Async):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "extend.ExtendTestService"

        @staticmethod
        def __get_metadata__():
            return py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata.gen_metadata_service_ExtendTestService()

        async def check(
            self,
            struct1: py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo
        ) -> bool:
            resp = await self._send_request(
                "ExtendTestService",
                "check",
                py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_args(
                    struct1=struct1,),
                py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )


    class Sync(py3lite_module_root.my.namespacing.test.hsmodule.lite_clients.HsTestService.Sync):
        @staticmethod
        def __get_thrift_name__() -> str:
            return "extend.ExtendTestService"

        @staticmethod
        def __get_metadata__():
            return py3lite_module_root.my.namespacing.extend.test.extend.lite_metadata.gen_metadata_service_ExtendTestService()

        def check(
            self,
            struct1: py3lite_module_root.my.namespacing.test.hsmodule.lite_types.HsFoo
        ) -> bool:
            resp = self._send_request(
                "ExtendTestService",
                "check",
                py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_args(
                    struct1=struct1,),
                py3lite_module_root.my.namespacing.extend.test.extend.lite_types._fbthrift_ExtendTestService_check_result,
            )
            # shortcut to success path for non-void returns
            if resp.success is not None:
                return resp.success
            raise _fbthrift_py3lite_exceptions.ApplicationError(
                _fbthrift_py3lite_exceptions.ApplicationErrorType.MISSING_RESULT,
                "Empty Response",
            )


