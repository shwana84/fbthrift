#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
from abc import ABCMeta
import typing as _typing

import folly.iobuf as _fbthrift_iobuf

import apache.thrift.metadata.lite_types as _fbthrift_metadata
from thrift.py3lite.serializer import serialize_iobuf, deserialize, Protocol
from thrift.py3lite.server import ServiceInterface, oneway, PythonUserException

import py3lite_module_root.my.namespacing.test.module.module.lite_types
import py3lite_module_root.my.namespacing.test.module.module.lite_metadata

class TestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta
):

    @staticmethod
    def service_name() -> bytes:
        return b"TestService"

    # pyre-ignore[3]: it can return anything
    def getFunctionTable(self) -> _typing.Mapping[bytes, _typing.Callable[..., _typing.Any]]:
        functionTable = {
            b"init": self._fbthrift__handler_init,
        }
        return {**super().getFunctionTable(), **functionTable}

    @staticmethod
    def __get_thrift_name__() -> str:
        return "module.TestService"

    @staticmethod
    def __get_metadata__() -> _fbthrift_metadata.ThriftMetadata:
        return py3lite_module_root.my.namespacing.test.module.module.lite_metadata.gen_metadata_service_TestService()



    async def init(
            self,
            int1: int
        ) -> int:
        raise NotImplementedError("async def init is not implemented")

    async def _fbthrift__handler_init(self, args: _fbthrift_iobuf.IOBuf, protocol: Protocol) -> _fbthrift_iobuf.IOBuf:
        args_struct = deserialize(py3lite_module_root.my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_args, args, protocol)
        value = await self.init(args_struct.int1,)
        return_struct = py3lite_module_root.my.namespacing.test.module.module.lite_types._fbthrift_TestService_init_result(success=value)

        return serialize_iobuf(return_struct, protocol)

