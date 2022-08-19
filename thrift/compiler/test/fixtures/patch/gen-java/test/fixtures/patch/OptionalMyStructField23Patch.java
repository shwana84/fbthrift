/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="OptionalMyStructField23Patch", builder=OptionalMyStructField23Patch.Builder.class)
public final class OptionalMyStructField23Patch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public OptionalMyStructField23Patch(
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE) final test.fixtures.patch.MyStructField23Patch patchPrior,
        @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL) final Map<String, String> ensure,
        @com.facebook.swift.codec.ThriftField(value=6, name="patchAfter", requiredness=Requiredness.NONE) final test.fixtures.patch.MyStructField23Patch patchAfter
    ) {
        this.clear = clear;
        this.patchPrior = patchPrior;
        this.ensure = ensure;
        this.patchAfter = patchAfter;
    }
    
    @ThriftConstructor
    protected OptionalMyStructField23Patch() {
      this.clear = false;
      this.patchPrior = null;
      this.ensure = null;
      this.patchAfter = null;
    }
    
    public static class Builder {
    
        private boolean clear = false;
        private test.fixtures.patch.MyStructField23Patch patchPrior = null;
        private Map<String, String> ensure = null;
        private test.fixtures.patch.MyStructField23Patch patchAfter = null;
    
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE)
        public Builder setPatchPrior(test.fixtures.patch.MyStructField23Patch patchPrior) {
            this.patchPrior = patchPrior;
            return this;
        }
    
        public test.fixtures.patch.MyStructField23Patch getPatchPrior() { return patchPrior; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL)
        public Builder setEnsure(Map<String, String> ensure) {
            this.ensure = ensure;
            return this;
        }
    
        public Map<String, String> getEnsure() { return ensure; }
    
            @com.facebook.swift.codec.ThriftField(value=6, name="patchAfter", requiredness=Requiredness.NONE)
        public Builder setPatchAfter(test.fixtures.patch.MyStructField23Patch patchAfter) {
            this.patchAfter = patchAfter;
            return this;
        }
    
        public test.fixtures.patch.MyStructField23Patch getPatchAfter() { return patchAfter; }
    
        public Builder() { }
        public Builder(OptionalMyStructField23Patch other) {
            this.clear = other.clear;
            this.patchPrior = other.patchPrior;
            this.ensure = other.ensure;
            this.patchAfter = other.patchAfter;
        }
    
        @ThriftConstructor
        public OptionalMyStructField23Patch build() {
            OptionalMyStructField23Patch result = new OptionalMyStructField23Patch (
                this.clear,
                this.patchPrior,
                this.ensure,
                this.patchAfter
            );
            return result;
        }
    }
                    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("OptionalMyStructField23Patch");
    private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final test.fixtures.patch.MyStructField23Patch patchPrior;
    public static final int _PATCHPRIOR = 3;
    private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.STRUCT, (short)3);
        private final Map<String, String> ensure;
    public static final int _ENSURE = 4;
    private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.MAP, (short)4);
        private final test.fixtures.patch.MyStructField23Patch patchAfter;
    public static final int _PATCHAFTER = 6;
    private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)6);
    static {
      NAMES_TO_IDS.put("clear", 2);
      THRIFT_NAMES_TO_IDS.put("clear", 2);
      FIELD_METADATA.put(2, CLEAR_FIELD_DESC);
      NAMES_TO_IDS.put("patchPrior", 3);
      THRIFT_NAMES_TO_IDS.put("patchPrior", 3);
      FIELD_METADATA.put(3, PATCH_PRIOR_FIELD_DESC);
      NAMES_TO_IDS.put("ensure", 4);
      THRIFT_NAMES_TO_IDS.put("ensure", 4);
      FIELD_METADATA.put(4, ENSURE_FIELD_DESC);
      NAMES_TO_IDS.put("patchAfter", 6);
      THRIFT_NAMES_TO_IDS.put("patchAfter", 6);
      FIELD_METADATA.put(6, PATCH_AFTER_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/OptionalMyStructField23Patch"), 
        OptionalMyStructField23Patch.class, OptionalMyStructField23Patch::read0));
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="patchPrior", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyStructField23Patch getPatchPrior() { return patchPrior; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL)
    public Map<String, String> getEnsure() { return ensure; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=6, name="patchAfter", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyStructField23Patch getPatchAfter() { return patchAfter; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("clear", clear);
        helper.add("patchPrior", patchPrior);
        helper.add("ensure", ensure);
        helper.add("patchAfter", patchAfter);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        OptionalMyStructField23Patch other = (OptionalMyStructField23Patch)o;
    
        return
            Objects.equals(clear, other.clear) &&
    Objects.equals(patchPrior, other.patchPrior) &&
    Objects.equals(ensure, other.ensure) &&
    Objects.equals(patchAfter, other.patchAfter) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            clear,
            patchPrior,
            ensure,
            patchAfter
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<OptionalMyStructField23Patch> asReader() {
      return OptionalMyStructField23Patch::read0;
    }
    
    public static OptionalMyStructField23Patch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(OptionalMyStructField23Patch.NAMES_TO_IDS, OptionalMyStructField23Patch.THRIFT_NAMES_TO_IDS, OptionalMyStructField23Patch.FIELD_METADATA);
      OptionalMyStructField23Patch.Builder builder = new OptionalMyStructField23Patch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CLEAR:
          if (__field.type == TType.BOOL) {
            boolean clear = oprot.readBool();
            builder.setClear(clear);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCHPRIOR:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyStructField23Patch patchPrior = test.fixtures.patch.MyStructField23Patch.read0(oprot);
            builder.setPatchPrior(patchPrior);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ENSURE:
          if (__field.type == TType.MAP) {
            Map<String, String> ensure;
            {
            TMap _map = oprot.readMapBegin();
            ensure = new HashMap<String, String>(Math.max(0, _map.size));
            for (int _i = 0; (_map.size < 0) ? oprot.peekMap() : (_i < _map.size); _i++) {
                
                String _key1 = oprot.readString();
                String _value1 = oprot.readString();
                ensure.put(_key1, _value1);
            }
            }
            oprot.readMapEnd();
            builder.setEnsure(ensure);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyStructField23Patch patchAfter = test.fixtures.patch.MyStructField23Patch.read0(oprot);
            builder.setPatchAfter(patchAfter);
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
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
      if (this.patchPrior != null) {
        oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
        this.patchPrior.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.ensure != null) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        Map<String, String> _iter0 = this.ensure;
        oprot.writeMapBegin(new TMap(TType.STRING, TType.STRING, _iter0.size()));
        for (Map.Entry<String, String> _iter1 : _iter0.entrySet()) {
          oprot.writeString(_iter1.getKey());
          oprot.writeString(_iter1.getValue());
        }
        oprot.writeMapEnd();
        oprot.writeFieldEnd();
      }
      if (this.patchAfter != null) {
        oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
        this.patchAfter.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _OptionalMyStructField23PatchLazy {
        private static final OptionalMyStructField23Patch _DEFAULT = new OptionalMyStructField23Patch.Builder().build();
    }
    
    public static OptionalMyStructField23Patch defaultInstance() {
        return  _OptionalMyStructField23PatchLazy._DEFAULT;
    }
}
