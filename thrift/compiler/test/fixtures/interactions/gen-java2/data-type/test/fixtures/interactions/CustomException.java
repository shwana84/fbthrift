/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.interactions;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct("CustomException")
public final class CustomException extends org.apache.thrift.TBaseException implements com.facebook.thrift.payload.ThriftSerializable {
    private static final long serialVersionUID = 1L;


    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();

    private static final TStruct STRUCT_DESC = new TStruct("CustomException");
    private final String message;
    public static final int _MESSAGE = 1;
    private static final TField MESSAGE_FIELD_DESC = new TField("message", TType.STRING, (short)1);

    @ThriftConstructor
    public CustomException(
        @com.facebook.swift.codec.ThriftField(value=1, name="message", requiredness=Requiredness.NONE) final String message
    ) {
        this.message = message;
    }
    
    @ThriftConstructor
    protected CustomException() {
      this.message = null;
    }
    
    public static class Builder {
    
        private String message = null;
    
        @com.facebook.swift.codec.ThriftField(value=1, name="message", requiredness=Requiredness.NONE)
        public Builder setMessage(String message) {
            this.message = message;
            return this;
        }
    
        public String getMessage() { return message; }
    
        public Builder() { }
        public Builder(CustomException other) {
            this.message = other.message;
        }
    
        @ThriftConstructor
        public CustomException build() {
            CustomException result = new CustomException (
                this.message
            );
            return result;
        }
    }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=1, name="message", requiredness=Requiredness.NONE)
    public String getMessage() { return message; }
    
    
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
        case _MESSAGE:
          if (__field.type == TType.STRING) {
            String message = oprot.readString();
            builder.setMessage(message);
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
      if (this.message != null) {
        oprot.writeFieldBegin(MESSAGE_FIELD_DESC);
        oprot.writeString(this.message);
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
