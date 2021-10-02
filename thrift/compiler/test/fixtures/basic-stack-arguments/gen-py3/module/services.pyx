#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

cimport cython
from typing import AsyncIterator
from cpython.version cimport PY_VERSION_HEX
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from libcpp.pair cimport pair
from cython.operator cimport dereference as deref
from cpython.ref cimport PyObject
from thrift.py3.exceptions cimport (
    cTApplicationException,
    ApplicationError as __ApplicationError,
    cTApplicationExceptionType__UNKNOWN)
from thrift.py3.server cimport ServiceInterface, RequestContext, Cpp2RequestContext
from thrift.py3.server import RequestContext
from folly cimport (
  cFollyPromise,
  cFollyUnit,
  c_unit,
)
from thrift.py3.common cimport (
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from thrift.py3.server cimport THRIFT_REQUEST_CONTEXT as __THRIFT_REQUEST_CONTEXT

cimport folly.futures
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
from folly.memory cimport to_shared_ptr as __to_shared_ptr

cimport module.types as _module_types
import module.types as _module_types

cimport module.services_reflection as _services_reflection

import asyncio
import functools
import sys
import traceback
import types as _py_types

from module.services_wrapper cimport cMyServiceInterface
from module.services_wrapper cimport cMyServiceFastInterface
from module.services_wrapper cimport cDbMixedStackArgumentsInterface



@cython.auto_pickle(False)
cdef class Promise_binary:
    cdef cFollyPromise[unique_ptr[string]]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[unique_ptr[string]](cFollyPromise[unique_ptr[string]].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef create(cFollyPromise[unique_ptr[string]] cPromise):
        cdef Promise_binary inst = Promise_binary.__new__(Promise_binary)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise__sa_binary:
    cdef cFollyPromise[string]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[string](cFollyPromise[string].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef create(cFollyPromise[string] cPromise):
        cdef Promise__sa_binary inst = Promise__sa_binary.__new__(Promise__sa_binary)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise__sa_cbool:
    cdef cFollyPromise[cbool]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cbool](cFollyPromise[cbool].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef create(cFollyPromise[cbool] cPromise):
        cdef Promise__sa_cbool inst = Promise__sa_cbool.__new__(Promise__sa_cbool)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise__sa_string:
    cdef cFollyPromise[string]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[string](cFollyPromise[string].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef create(cFollyPromise[string] cPromise):
        cdef Promise__sa_string inst = Promise__sa_string.__new__(Promise__sa_string)
        inst.cPromise[0] = cmove(cPromise)
        return inst

@cython.auto_pickle(False)
cdef class Promise__sa_cFollyUnit:
    cdef cFollyPromise[cFollyUnit]* cPromise

    def __cinit__(self):
        self.cPromise = new cFollyPromise[cFollyUnit](cFollyPromise[cFollyUnit].makeEmpty())

    def __dealloc__(self):
        del self.cPromise

    @staticmethod
    cdef create(cFollyPromise[cFollyUnit] cPromise):
        cdef Promise__sa_cFollyUnit inst = Promise__sa_cFollyUnit.__new__(Promise__sa_cFollyUnit)
        inst.cPromise[0] = cmove(cPromise)
        return inst

cdef object _MyService_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class MyServiceInterface(
    ServiceInterface
):
    annotations = _MyService_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceInterface(
            <PyObject *> self,
            get_executor()
        )

    async def hasDataById(
            self,
            id):
        raise NotImplementedError("async def hasDataById is not implemented")

    async def getDataById(
            self,
            id):
        raise NotImplementedError("async def getDataById is not implemented")

    async def putDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def putDataById is not implemented")

    async def lobDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def lobDataById is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__MyService(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cMyServiceSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyService"

cdef object _MyServiceFast_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class MyServiceFastInterface(
    ServiceInterface
):
    annotations = _MyServiceFast_annotations

    def __cinit__(self):
        self._cpp_obj = cMyServiceFastInterface(
            <PyObject *> self,
            get_executor()
        )

    async def hasDataById(
            self,
            id):
        raise NotImplementedError("async def hasDataById is not implemented")

    async def getDataById(
            self,
            id):
        raise NotImplementedError("async def getDataById is not implemented")

    async def putDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def putDataById is not implemented")

    async def lobDataById(
            self,
            id,
            data):
        raise NotImplementedError("async def lobDataById is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__MyServiceFast(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cMyServiceFastSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyServiceFast"

cdef object _DbMixedStackArguments_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class DbMixedStackArgumentsInterface(
    ServiceInterface
):
    annotations = _DbMixedStackArguments_annotations

    def __cinit__(self):
        self._cpp_obj = cDbMixedStackArgumentsInterface(
            <PyObject *> self,
            get_executor()
        )

    async def getDataByKey0(
            self,
            key):
        raise NotImplementedError("async def getDataByKey0 is not implemented")

    async def getDataByKey1(
            self,
            key):
        raise NotImplementedError("async def getDataByKey1 is not implemented")

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__DbMixedStackArguments(for_clients=False)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cDbMixedStackArgumentsSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.DbMixedStackArguments"



cdef api void call_cy_MyService_hasDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cbool] cPromise,
    cint64_t id
):
    cdef Promise__sa_cbool __promise = Promise__sa_cbool.create(cmove(cPromise))
    arg_id = id
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_hasDataById_coro(
            self,
            __promise,
            arg_id
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_hasDataById_coro(
    object self,
    Promise__sa_cbool promise,
    id
):
    try:
        result = await self.hasDataById(
                    id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler hasDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler hasDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<cbool> result)

cdef api void call_cy_MyService_getDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[string] cPromise,
    cint64_t id
):
    cdef Promise__sa_string __promise = Promise__sa_string.create(cmove(cPromise))
    arg_id = id
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_getDataById_coro(
            self,
            __promise,
            arg_id
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_getDataById_coro(
    object self,
    Promise__sa_string promise,
    id
):
    try:
        result = await self.getDataById(
                    id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler getDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<string?> result.encode('UTF-8'))

cdef api void call_cy_MyService_putDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    cint64_t id,
    string data
):
    cdef Promise__sa_cFollyUnit __promise = Promise__sa_cFollyUnit.create(cmove(cPromise))
    arg_id = id
    arg_data = data.data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_putDataById_coro(
            self,
            __promise,
            arg_id,
            arg_data
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_putDataById_coro(
    object self,
    Promise__sa_cFollyUnit promise,
    id,
    data
):
    try:
        result = await self.putDataById(
                    id,
                    data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler putDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler putDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyService_lobDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    cint64_t id,
    string data
):
    cdef Promise__sa_cFollyUnit __promise = Promise__sa_cFollyUnit.create(cmove(cPromise))
    arg_id = id
    arg_data = data.data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyService_lobDataById_coro(
            self,
            __promise,
            arg_id,
            arg_data
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyService_lobDataById_coro(
    object self,
    Promise__sa_cFollyUnit promise,
    id,
    data
):
    try:
        result = await self.lobDataById(
                    id,
                    data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler lobDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler lobDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServiceFast_hasDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cbool] cPromise,
    cint64_t id
):
    cdef Promise__sa_cbool __promise = Promise__sa_cbool.create(cmove(cPromise))
    arg_id = id
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyServiceFast_hasDataById_coro(
            self,
            __promise,
            arg_id
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyServiceFast_hasDataById_coro(
    object self,
    Promise__sa_cbool promise,
    id
):
    try:
        result = await self.hasDataById(
                    id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler hasDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler hasDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<cbool> result)

cdef api void call_cy_MyServiceFast_getDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[string] cPromise,
    cint64_t id
):
    cdef Promise__sa_string __promise = Promise__sa_string.create(cmove(cPromise))
    arg_id = id
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyServiceFast_getDataById_coro(
            self,
            __promise,
            arg_id
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyServiceFast_getDataById_coro(
    object self,
    Promise__sa_string promise,
    id
):
    try:
        result = await self.getDataById(
                    id)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler getDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<string?> result.encode('UTF-8'))

cdef api void call_cy_MyServiceFast_putDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    cint64_t id,
    string data
):
    cdef Promise__sa_cFollyUnit __promise = Promise__sa_cFollyUnit.create(cmove(cPromise))
    arg_id = id
    arg_data = data.data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyServiceFast_putDataById_coro(
            self,
            __promise,
            arg_id,
            arg_data
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyServiceFast_putDataById_coro(
    object self,
    Promise__sa_cFollyUnit promise,
    id,
    data
):
    try:
        result = await self.putDataById(
                    id,
                    data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler putDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler putDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_MyServiceFast_lobDataById(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[cFollyUnit] cPromise,
    cint64_t id,
    string data
):
    cdef Promise__sa_cFollyUnit __promise = Promise__sa_cFollyUnit.create(cmove(cPromise))
    arg_id = id
    arg_data = data.data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        MyServiceFast_lobDataById_coro(
            self,
            __promise,
            arg_id,
            arg_data
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def MyServiceFast_lobDataById_coro(
    object self,
    Promise__sa_cFollyUnit promise,
    id,
    data
):
    try:
        result = await self.lobDataById(
                    id,
                    data)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler lobDataById:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler lobDataById:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(c_unit)

cdef api void call_cy_DbMixedStackArguments_getDataByKey0(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[unique_ptr[string]] cPromise,
    unique_ptr[string] key
):
    cdef Promise_binary __promise = Promise_binary.create(cmove(cPromise))
    arg_key = (deref(key)).data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        DbMixedStackArguments_getDataByKey0_coro(
            self,
            __promise,
            arg_key
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def DbMixedStackArguments_getDataByKey0_coro(
    object self,
    Promise_binary promise,
    key
):
    try:
        result = await self.getDataByKey0(
                    key)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataByKey0:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler getDataByKey0:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(make_unique[string](<string?> result))

cdef api void call_cy_DbMixedStackArguments_getDataByKey1(
    object self,
    Cpp2RequestContext* ctx,
    cFollyPromise[string] cPromise,
    string key
):
    cdef Promise__sa_binary __promise = Promise__sa_binary.create(cmove(cPromise))
    arg_key = key.data().decode('UTF-8')
    __context = RequestContext.create(ctx)
    __context_token = __THRIFT_REQUEST_CONTEXT.set(__context)
    asyncio.get_event_loop().create_task(
        DbMixedStackArguments_getDataByKey1_coro(
            self,
            __promise,
            arg_key
        )
    )
    __THRIFT_REQUEST_CONTEXT.reset(__context_token)

async def DbMixedStackArguments_getDataByKey1_coro(
    object self,
    Promise__sa_binary promise,
    key
):
    try:
        result = await self.getDataByKey1(
                    key)
    except __ApplicationError as ex:
        # If the handler raised an ApplicationError convert it to a C++ one
        promise.cPromise.setException(cTApplicationException(
            ex.type.value, ex.message.encode('UTF-8')
        ))
    except Exception as ex:
        print(
            "Unexpected error in service handler getDataByKey1:",
            file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, repr(ex).encode('UTF-8')
        ))
    except asyncio.CancelledError as ex:
        print("Coroutine was cancelled in service handler getDataByKey1:", file=sys.stderr)
        traceback.print_exc()
        promise.cPromise.setException(cTApplicationException(
            cTApplicationExceptionType__UNKNOWN, (f'Application was cancelled on the server with message: {str(ex)}').encode('UTF-8')
        ))
    else:
        promise.cPromise.setValue(<string?> result)

