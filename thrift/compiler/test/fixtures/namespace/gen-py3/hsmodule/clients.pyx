#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr, make_unique
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libc.stdint cimport int8_t, int16_t, int32_t, int64_t
from libcpp.vector cimport vector as vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception, create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
import thrift.py3.client
cimport thrift.py3.client
from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport hsmodule.types as _hsmodule_types
import hsmodule.types as _hsmodule_types

from hsmodule.clients_wrapper cimport cHsTestServiceAsyncClient, cHsTestServiceClientWrapper


cdef void HsTestService_init_callback(
    cFollyTry[int64_t]&& result,
    PyObject* userdata
):
    client, pyfuture = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception()))
    else:
        try:
            pyfuture.set_result(result.value())
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _HsTestService_annotations = _py_types.MappingProxyType({
})


cdef class HsTestService(thrift.py3.client.Client):
    annotations = _HsTestService_annotations

    def __cinit__(HsTestService self):
        loop = asyncio_get_event_loop()
        self._connect_future = loop.create_future()
        self._deferred_headers = {}

    cdef const type_info* _typeid(HsTestService self):
        return &typeid(cHsTestServiceAsyncClient)

    @staticmethod
    cdef _hsmodule_HsTestService_set_client(HsTestService inst, shared_ptr[cHsTestServiceClientWrapper] c_obj):
        """So the class hierarchy talks to the correct pointer type"""
        inst._hsmodule_HsTestService_client = c_obj

    cdef _hsmodule_HsTestService_reset_client(HsTestService self):
        """So the class hierarchy resets the shared pointer up the chain"""
        self._hsmodule_HsTestService_client.reset()

    def __dealloc__(HsTestService self):
        if self._connect_future.done() and not self._connect_future.exception():
            print(f'thrift-py3 client: {self!r} was not cleaned up, use the async context manager', file=sys.stderr)
            if self._hsmodule_HsTestService_client:
                deref(self._hsmodule_HsTestService_client).disconnect().get()
        self._hsmodule_HsTestService_reset_client()

    cdef bind_client(HsTestService self, cRequestChannel_ptr&& channel):
        HsTestService._hsmodule_HsTestService_set_client(
            self,
            makeClientWrapper[cHsTestServiceAsyncClient, cHsTestServiceClientWrapper](
                thrift.py3.client.move(channel)
            ),
        )

    async def __aenter__(HsTestService self):
        await asyncio_shield(self._connect_future)
        if self._context_entered:
            raise asyncio_InvalidStateError('Client context has been used already')
        self._context_entered = True
        for key, value in self._deferred_headers.items():
            self.set_persistent_header(key, value)
        self._deferred_headers = None
        return self

    def __aexit__(HsTestService self, *exc):
        self._check_connect_future()
        loop = asyncio_get_event_loop()
        future = loop.create_future()
        userdata = (self, future)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            deref(self._hsmodule_HsTestService_client).disconnect(),
            closed_HsTestService_py3_client_callback,
            <PyObject *>userdata  # So we keep client alive until disconnect
        )
        # To break any future usage of this client
        # Also to prevent dealloc from trying to disconnect in a blocking way.
        badfuture = loop.create_future()
        badfuture.set_exception(asyncio_InvalidStateError('Client Out of Context'))
        badfuture.exception()
        self._connect_future = badfuture
        return asyncio_shield(future)

    def set_persistent_header(HsTestService self, str key, str value):
        if not self._hsmodule_HsTestService_client:
            self._deferred_headers[key] = value
            return

        cdef string ckey = <bytes> key.encode('utf-8')
        cdef string cvalue = <bytes> value.encode('utf-8')
        deref(self._hsmodule_HsTestService_client).setPersistentHeader(ckey, cvalue)

    @cython.always_allow_keywords(True)
    def init(
            HsTestService self,
            int1 not None
    ):
        if not isinstance(int1, int):
            raise TypeError(f'int1 is not a {int !r}.')
        else:
            <int64_t> int1
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future)
        bridgeFutureWith[int64_t](
            self._executor,
            deref(self._hsmodule_HsTestService_client).init(
                int1,
            ),
            HsTestService_init_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)



cdef void closed_HsTestService_py3_client_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata,
):
    client, pyfuture = <object> userdata 
    pyfuture.set_result(None)
