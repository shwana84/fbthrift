#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import hsmodule.types as _hsmodule_types

_HsTestServiceInterfaceT = _typing.TypeVar('_HsTestServiceInterfaceT', bound='HsTestServiceInterface')


class HsTestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def init(
        self,
        int1: int
    ) -> int: ...
    pass


