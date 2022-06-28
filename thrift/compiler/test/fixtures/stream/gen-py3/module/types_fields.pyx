#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cython.operator cimport dereference as deref
from libcpp.memory cimport make_unique, unique_ptr, shared_ptr
from thrift.py3.types cimport assign_unique_ptr, assign_shared_ptr, assign_shared_const_ptr

cimport thrift.py3.types
from thrift.py3.types cimport (
    reset_field as __reset_field,
    StructFieldsSetter as __StructFieldsSetter
)

from thrift.py3.types cimport const_pointer_cast


@__cython.auto_pickle(False)
cdef class __FooStreamEx_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FooStreamEx_FieldsSetter _fbthrift_create(_module_types.cFooStreamEx* struct_cpp_obj):
        cdef __FooStreamEx_FieldsSetter __fbthrift_inst = __FooStreamEx_FieldsSetter.__new__(__FooStreamEx_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        return __fbthrift_inst

    cdef void set_field(__FooStreamEx_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FooStreamEx_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)


@__cython.auto_pickle(False)
cdef class __FooEx_FieldsSetter(__StructFieldsSetter):

    @staticmethod
    cdef __FooEx_FieldsSetter _fbthrift_create(_module_types.cFooEx* struct_cpp_obj):
        cdef __FooEx_FieldsSetter __fbthrift_inst = __FooEx_FieldsSetter.__new__(__FooEx_FieldsSetter)
        __fbthrift_inst._struct_cpp_obj = struct_cpp_obj
        return __fbthrift_inst

    cdef void set_field(__FooEx_FieldsSetter self, const char* name, object value) except *:
        cdef __cstring_view cname = __cstring_view(name)
        cdef cumap[__cstring_view, __FooEx_FieldsSetterFunc].iterator found = self._setters.find(cname)
        if found == self._setters.end():
            raise TypeError(f"invalid field name {name.decode('utf-8')}")
        deref(found).second(self, value)

