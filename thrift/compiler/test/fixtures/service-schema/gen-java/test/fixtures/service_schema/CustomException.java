/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.service_schema;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import com.google.common.collect.*;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("CustomException")
public final class CustomException extends org.apache.thrift.TBaseException implements com.facebook.thrift.payload.ThriftSerializable {
    private static final long serialVersionUID = 1L;

    
    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("CustomException");
    private final String name;
    public static final int _NAME = 1;
    private static final TField NAME_FIELD_DESC = new TField("name", TType.STRING, (short)1);

    static {
      NAMES_TO_IDS.put("name", 1);
      THRIFT_NAMES_TO_IDS.put("name", 1);
      FIELD_METADATA.put(1, NAME_FIELD_DESC);
    }

    @ThriftConstructor
    public CustomException(
        @com.facebook.swift.codec.ThriftField(value=1, name="name", requiredness=Requiredness.NONE) final String name
    ) {
        this.name = name;
    }
    
    @ThriftConstructor
    protected CustomException() {
      this.name = null;
    }
    
    public static class Builder {
    
        private String name = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="name", requiredness=Requiredness.NONE)
        public Builder setName(String name) {
            this.name = name;
            return this;
        }
    
        public String getName() { return name; }
    
        public Builder() { }
        public Builder(CustomException other) {
            this.name = other.name;
        }
    
        @ThriftConstructor
        public CustomException build() {
            CustomException result = new CustomException (
                this.name
            );
            return result;
        }
    }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="name", requiredness=Requiredness.NONE)
    public String getName() { return name; }
    
    
    public static com.facebook.thrift.payload.Reader<CustomException> asReader() {
      return CustomException::read0;
    }
    
    public static CustomException read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(CustomException.NAMES_TO_IDS, CustomException.THRIFT_NAMES_TO_IDS, CustomException.FIELD_METADATA);
      CustomException.Builder builder = new CustomException.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _NAME:
          if (__field.type == TType.STRING) {
            String name = oprot.readString();
            builder.setName(name);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      if (name != null) {
        oprot.writeFieldBegin(NAME_FIELD_DESC);
        oprot.writeString(this.name);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _CustomExceptionLazy {
        private static final CustomException _DEFAULT = new CustomException.Builder().build();
    }
    
    public static CustomException defaultInstance() {
        return  _CustomExceptionLazy._DEFAULT;
    }}
