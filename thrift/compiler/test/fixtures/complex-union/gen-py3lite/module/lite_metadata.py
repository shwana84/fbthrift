#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#
import apache.thrift.metadata.lite_types as _fbthrift_metadata


# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_ComplexUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.ComplexUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="intValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=5, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="stringValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE))), name="intListValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE))), name="stringListValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE))), name="typedefValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=14, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="stringRef", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # intValue
     # stringValue
     # intListValue
     # stringListValue
     # key
     # val  # typedefValue
     # stringRef

    return new_struct
def gen_metadata_struct_ComplexUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_ComplexUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_ListUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.ListUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE))), name="intListValue", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=3, type=_fbthrift_metadata.ThriftType(t_list=_fbthrift_metadata.ThriftListType(valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE))), name="stringListValue", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # intListValue
     # stringListValue

    return new_struct
def gen_metadata_struct_ListUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_ListUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_DataUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.DataUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_BINARY_TYPE), name="binaryData", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="stringData", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # binaryData
     # stringData

    return new_struct
def gen_metadata_struct_DataUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_DataUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_Val(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.Val"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="strVal", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I32_TYPE), name="intVal", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=9, type=_fbthrift_metadata.ThriftType(t_map=_fbthrift_metadata.ThriftMapType(keyType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I16_TYPE),valueType=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE))), name="typedefValue", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # strVal
     # intVal
     # key
     # val  # typedefValue

    return new_struct
def gen_metadata_struct_Val() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_Val(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_ValUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.ValUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.Val")), name="v1", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.Val")), name="v2", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

    new_struct = _fbthrift_gen_metadata_struct_Val(new_struct) # v1
    new_struct = _fbthrift_gen_metadata_struct_Val(new_struct) # v2

    return new_struct
def gen_metadata_struct_ValUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_ValUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_VirtualComplexUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.VirtualComplexUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="thingOne", is_optional=False, structured_annotations=[]),
        _fbthrift_metadata.ThriftField(id=2, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_STRING_TYPE), name="thingTwo", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # thingOne
     # thingTwo

    return new_struct
def gen_metadata_struct_VirtualComplexUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_VirtualComplexUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_NonCopyableStruct(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.NonCopyableStruct"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_primitive=_fbthrift_metadata.ThriftPrimitiveType.THRIFT_I64_TYPE), name="num", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=False,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

     # num

    return new_struct
def gen_metadata_struct_NonCopyableStruct() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_NonCopyableStruct(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))

# TODO (ffrancet): This general pattern can be optimized by using tuples and dicts
# instead of re-generating thrift structs
def _fbthrift_gen_metadata_struct_NonCopyableUnion(metadata_struct: _fbthrift_metadata.ThriftMetadata) -> _fbthrift_metadata.ThriftMetadata:
    qualified_name = "module.NonCopyableUnion"

    if qualified_name in metadata_struct.structs:
        return metadata_struct
    fields = [
        _fbthrift_metadata.ThriftField(id=1, type=_fbthrift_metadata.ThriftType(t_struct=_fbthrift_metadata.ThriftStructType(name="module.NonCopyableStruct")), name="s", is_optional=False, structured_annotations=[]),
    ]
    struct_dict = dict(metadata_struct.structs)
    struct_dict[qualified_name] = _fbthrift_metadata.ThriftStruct(name=qualified_name, fields=fields,
        is_union=True,
        structured_annotations=[])
    new_struct = metadata_struct(structs=struct_dict)

    new_struct = _fbthrift_gen_metadata_struct_NonCopyableStruct(new_struct) # s

    return new_struct
def gen_metadata_struct_NonCopyableUnion() -> _fbthrift_metadata.ThriftMetadata:
    return _fbthrift_gen_metadata_struct_NonCopyableUnion(_fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={}))




def getThriftModuleMetadata():
    meta = _fbthrift_metadata.ThriftMetadata(structs={}, enums={}, exceptions={}, services={})
    meta = _fbthrift_gen_metadata_struct_ComplexUnion(meta)
    meta = _fbthrift_gen_metadata_struct_ListUnion(meta)
    meta = _fbthrift_gen_metadata_struct_DataUnion(meta)
    meta = _fbthrift_gen_metadata_struct_Val(meta)
    meta = _fbthrift_gen_metadata_struct_ValUnion(meta)
    meta = _fbthrift_gen_metadata_struct_VirtualComplexUnion(meta)
    meta = _fbthrift_gen_metadata_struct_NonCopyableStruct(meta)
    meta = _fbthrift_gen_metadata_struct_NonCopyableUnion(meta)
    return meta
