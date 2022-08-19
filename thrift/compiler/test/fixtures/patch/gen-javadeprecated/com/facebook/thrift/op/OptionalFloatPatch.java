/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
package com.facebook.thrift.op;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
import com.facebook.thrift.*;
import com.facebook.thrift.annotations.*;
import com.facebook.thrift.async.*;
import com.facebook.thrift.meta_data.*;
import com.facebook.thrift.server.*;
import com.facebook.thrift.transport.*;
import com.facebook.thrift.protocol.*;

@SuppressWarnings({ "unused", "serial" })
public class OptionalFloatPatch implements TBase, java.io.Serializable, Cloneable, Comparable<OptionalFloatPatch> {
  private static final TStruct STRUCT_DESC = new TStruct("OptionalFloatPatch");
  private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
  private static final TField PATCH_PRIOR_FIELD_DESC = new TField("patchPrior", TType.STRUCT, (short)3);
  private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.FLOAT, (short)4);
  private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)6);

  /**
   * Clears any set value. Applies first.
   */
  public boolean clear;
  /**
   * Patches any previously set values. Applies second.
   */
  public FloatPatch patchPrior;
  /**
   * Assigns the value, if not already set to the same field. Applies third.
   */
  public float ensure;
  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public FloatPatch patchAfter;
  public static final int CLEAR = 2;
  public static final int PATCHPRIOR = 3;
  public static final int ENSURE = 4;
  public static final int PATCHAFTER = 6;

  // isset id assignments
  private static final int __CLEAR_ISSET_ID = 0;
  private static final int __ENSURE_ISSET_ID = 1;
  private BitSet __isset_bit_vector = new BitSet(2);

  public static final Map<Integer, FieldMetaData> metaDataMap;

  static {
    Map<Integer, FieldMetaData> tmpMetaDataMap = new HashMap<Integer, FieldMetaData>();
    tmpMetaDataMap.put(CLEAR, new FieldMetaData("clear", TFieldRequirementType.DEFAULT, 
        new FieldValueMetaData(TType.BOOL)));
    tmpMetaDataMap.put(PATCHPRIOR, new FieldMetaData("patchPrior", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, FloatPatch.class)));
    tmpMetaDataMap.put(ENSURE, new FieldMetaData("ensure", TFieldRequirementType.OPTIONAL, 
        new FieldValueMetaData(TType.FLOAT)));
    tmpMetaDataMap.put(PATCHAFTER, new FieldMetaData("patchAfter", TFieldRequirementType.DEFAULT, 
        new StructMetaData(TType.STRUCT, FloatPatch.class)));
    metaDataMap = Collections.unmodifiableMap(tmpMetaDataMap);
  }

  static {
    FieldMetaData.addStructMetaDataMap(OptionalFloatPatch.class, metaDataMap);
  }

  public OptionalFloatPatch() {
  }

  public OptionalFloatPatch(
      boolean clear,
      FloatPatch patchPrior,
      FloatPatch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patchPrior = patchPrior;
    this.patchAfter = patchAfter;
  }

  public OptionalFloatPatch(
      boolean clear,
      FloatPatch patchPrior,
      float ensure,
      FloatPatch patchAfter) {
    this();
    this.clear = clear;
    setClearIsSet(true);
    this.patchPrior = patchPrior;
    this.ensure = ensure;
    setEnsureIsSet(true);
    this.patchAfter = patchAfter;
  }

  public static class Builder {
    private boolean clear;
    private FloatPatch patchPrior;
    private float ensure;
    private FloatPatch patchAfter;

    BitSet __optional_isset = new BitSet(2);

    public Builder() {
    }

    public Builder setClear(final boolean clear) {
      this.clear = clear;
      __optional_isset.set(__CLEAR_ISSET_ID, true);
      return this;
    }

    public Builder setPatchPrior(final FloatPatch patchPrior) {
      this.patchPrior = patchPrior;
      return this;
    }

    public Builder setEnsure(final float ensure) {
      this.ensure = ensure;
      __optional_isset.set(__ENSURE_ISSET_ID, true);
      return this;
    }

    public Builder setPatchAfter(final FloatPatch patchAfter) {
      this.patchAfter = patchAfter;
      return this;
    }

    public OptionalFloatPatch build() {
      OptionalFloatPatch result = new OptionalFloatPatch();
      if (__optional_isset.get(__CLEAR_ISSET_ID)) {
        result.setClear(this.clear);
      }
      result.setPatchPrior(this.patchPrior);
      if (__optional_isset.get(__ENSURE_ISSET_ID)) {
        result.setEnsure(this.ensure);
      }
      result.setPatchAfter(this.patchAfter);
      return result;
    }
  }

  public static Builder builder() {
    return new Builder();
  }

  /**
   * Performs a deep copy on <i>other</i>.
   */
  public OptionalFloatPatch(OptionalFloatPatch other) {
    __isset_bit_vector.clear();
    __isset_bit_vector.or(other.__isset_bit_vector);
    this.clear = TBaseHelper.deepCopy(other.clear);
    if (other.isSetPatchPrior()) {
      this.patchPrior = TBaseHelper.deepCopy(other.patchPrior);
    }
    this.ensure = TBaseHelper.deepCopy(other.ensure);
    if (other.isSetPatchAfter()) {
      this.patchAfter = TBaseHelper.deepCopy(other.patchAfter);
    }
  }

  public OptionalFloatPatch deepCopy() {
    return new OptionalFloatPatch(this);
  }

  /**
   * Clears any set value. Applies first.
   */
  public boolean isClear() {
    return this.clear;
  }

  /**
   * Clears any set value. Applies first.
   */
  public OptionalFloatPatch setClear(boolean clear) {
    this.clear = clear;
    setClearIsSet(true);
    return this;
  }

  public void unsetClear() {
    __isset_bit_vector.clear(__CLEAR_ISSET_ID);
  }

  // Returns true if field clear is set (has been assigned a value) and false otherwise
  public boolean isSetClear() {
    return __isset_bit_vector.get(__CLEAR_ISSET_ID);
  }

  public void setClearIsSet(boolean __value) {
    __isset_bit_vector.set(__CLEAR_ISSET_ID, __value);
  }

  /**
   * Patches any previously set values. Applies second.
   */
  public FloatPatch getPatchPrior() {
    return this.patchPrior;
  }

  /**
   * Patches any previously set values. Applies second.
   */
  public OptionalFloatPatch setPatchPrior(FloatPatch patchPrior) {
    this.patchPrior = patchPrior;
    return this;
  }

  public void unsetPatchPrior() {
    this.patchPrior = null;
  }

  // Returns true if field patchPrior is set (has been assigned a value) and false otherwise
  public boolean isSetPatchPrior() {
    return this.patchPrior != null;
  }

  public void setPatchPriorIsSet(boolean __value) {
    if (!__value) {
      this.patchPrior = null;
    }
  }

  /**
   * Assigns the value, if not already set to the same field. Applies third.
   */
  public float getEnsure() {
    return this.ensure;
  }

  /**
   * Assigns the value, if not already set to the same field. Applies third.
   */
  public OptionalFloatPatch setEnsure(float ensure) {
    this.ensure = ensure;
    setEnsureIsSet(true);
    return this;
  }

  public void unsetEnsure() {
    __isset_bit_vector.clear(__ENSURE_ISSET_ID);
  }

  // Returns true if field ensure is set (has been assigned a value) and false otherwise
  public boolean isSetEnsure() {
    return __isset_bit_vector.get(__ENSURE_ISSET_ID);
  }

  public void setEnsureIsSet(boolean __value) {
    __isset_bit_vector.set(__ENSURE_ISSET_ID, __value);
  }

  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public FloatPatch getPatchAfter() {
    return this.patchAfter;
  }

  /**
   * Patches any set value, including newly set values. Applies last.
   */
  public OptionalFloatPatch setPatchAfter(FloatPatch patchAfter) {
    this.patchAfter = patchAfter;
    return this;
  }

  public void unsetPatchAfter() {
    this.patchAfter = null;
  }

  // Returns true if field patchAfter is set (has been assigned a value) and false otherwise
  public boolean isSetPatchAfter() {
    return this.patchAfter != null;
  }

  public void setPatchAfterIsSet(boolean __value) {
    if (!__value) {
      this.patchAfter = null;
    }
  }

  public void setFieldValue(int fieldID, Object __value) {
    switch (fieldID) {
    case CLEAR:
      if (__value == null) {
        unsetClear();
      } else {
        setClear((Boolean)__value);
      }
      break;

    case PATCHPRIOR:
      if (__value == null) {
        unsetPatchPrior();
      } else {
        setPatchPrior((FloatPatch)__value);
      }
      break;

    case ENSURE:
      if (__value == null) {
        unsetEnsure();
      } else {
        setEnsure((Float)__value);
      }
      break;

    case PATCHAFTER:
      if (__value == null) {
        unsetPatchAfter();
      } else {
        setPatchAfter((FloatPatch)__value);
      }
      break;

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  public Object getFieldValue(int fieldID) {
    switch (fieldID) {
    case CLEAR:
      return new Boolean(isClear());

    case PATCHPRIOR:
      return getPatchPrior();

    case ENSURE:
      return new Float(getEnsure());

    case PATCHAFTER:
      return getPatchAfter();

    default:
      throw new IllegalArgumentException("Field " + fieldID + " doesn't exist!");
    }
  }

  @Override
  public boolean equals(Object _that) {
    if (_that == null)
      return false;
    if (this == _that)
      return true;
    if (!(_that instanceof OptionalFloatPatch))
      return false;
    OptionalFloatPatch that = (OptionalFloatPatch)_that;

    if (!TBaseHelper.equalsNobinary(this.clear, that.clear)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchPrior(), that.isSetPatchPrior(), this.patchPrior, that.patchPrior)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetEnsure(), that.isSetEnsure(), this.ensure, that.ensure)) { return false; }

    if (!TBaseHelper.equalsNobinary(this.isSetPatchAfter(), that.isSetPatchAfter(), this.patchAfter, that.patchAfter)) { return false; }

    return true;
  }

  @Override
  public int hashCode() {
    return Arrays.deepHashCode(new Object[] {clear, patchPrior, ensure, patchAfter});
  }

  @Override
  public int compareTo(OptionalFloatPatch other) {
    if (other == null) {
      // See java.lang.Comparable docs
      throw new NullPointerException();
    }

    if (other == this) {
      return 0;
    }
    int lastComparison = 0;

    lastComparison = Boolean.valueOf(isSetClear()).compareTo(other.isSetClear());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(clear, other.clear);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatchPrior()).compareTo(other.isSetPatchPrior());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patchPrior, other.patchPrior);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetEnsure()).compareTo(other.isSetEnsure());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(ensure, other.ensure);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    lastComparison = Boolean.valueOf(isSetPatchAfter()).compareTo(other.isSetPatchAfter());
    if (lastComparison != 0) {
      return lastComparison;
    }
    lastComparison = TBaseHelper.compareTo(patchAfter, other.patchAfter);
    if (lastComparison != 0) { 
      return lastComparison;
    }
    return 0;
  }

  public void read(TProtocol iprot) throws TException {
    TField __field;
    iprot.readStructBegin(metaDataMap);
    while (true)
    {
      __field = iprot.readFieldBegin();
      if (__field.type == TType.STOP) {
        break;
      }
      switch (__field.id)
      {
        case CLEAR:
          if (__field.type == TType.BOOL) {
            this.clear = iprot.readBool();
            setClearIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHPRIOR:
          if (__field.type == TType.STRUCT) {
            this.patchPrior = new FloatPatch();
            this.patchPrior.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case ENSURE:
          if (__field.type == TType.FLOAT) {
            this.ensure = iprot.readFloat();
            setEnsureIsSet(true);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        case PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            this.patchAfter = new FloatPatch();
            this.patchAfter.read(iprot);
          } else {
            TProtocolUtil.skip(iprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(iprot, __field.type);
          break;
      }
      iprot.readFieldEnd();
    }
    iprot.readStructEnd();


    // check for required fields of primitive type, which can't be checked in the validate method
    validate();
  }

  public void write(TProtocol oprot) throws TException {
    validate();

    oprot.writeStructBegin(STRUCT_DESC);
    oprot.writeFieldBegin(CLEAR_FIELD_DESC);
    oprot.writeBool(this.clear);
    oprot.writeFieldEnd();
    if (this.patchPrior != null) {
      oprot.writeFieldBegin(PATCH_PRIOR_FIELD_DESC);
      this.patchPrior.write(oprot);
      oprot.writeFieldEnd();
    }
    if (isSetEnsure()) {
      oprot.writeFieldBegin(ENSURE_FIELD_DESC);
      oprot.writeFloat(this.ensure);
      oprot.writeFieldEnd();
    }
    if (this.patchAfter != null) {
      oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
      this.patchAfter.write(oprot);
      oprot.writeFieldEnd();
    }
    oprot.writeFieldStop();
    oprot.writeStructEnd();
  }

  @Override
  public String toString() {
    return toString(1, true);
  }

  @Override
  public String toString(int indent, boolean prettyPrint) {
    String indentStr = prettyPrint ? TBaseHelper.getIndentedString(indent) : "";
    String newLine = prettyPrint ? "\n" : "";
    String space = prettyPrint ? " " : "";
    StringBuilder sb = new StringBuilder("OptionalFloatPatch");
    sb.append(space);
    sb.append("(");
    sb.append(newLine);
    boolean first = true;

    sb.append(indentStr);
    sb.append("clear");
    sb.append(space);
    sb.append(":").append(space);
    sb.append(TBaseHelper.toString(this.isClear(), indent + 1, prettyPrint));
    first = false;
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patchPrior");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatchPrior() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatchPrior(), indent + 1, prettyPrint));
    }
    first = false;
    if (isSetEnsure())
    {
      if (!first) sb.append("," + newLine);
      sb.append(indentStr);
      sb.append("ensure");
      sb.append(space);
      sb.append(":").append(space);
      sb.append(TBaseHelper.toString(this.getEnsure(), indent + 1, prettyPrint));
      first = false;
    }
    if (!first) sb.append("," + newLine);
    sb.append(indentStr);
    sb.append("patchAfter");
    sb.append(space);
    sb.append(":").append(space);
    if (this.getPatchAfter() == null) {
      sb.append("null");
    } else {
      sb.append(TBaseHelper.toString(this.getPatchAfter(), indent + 1, prettyPrint));
    }
    first = false;
    sb.append(newLine + TBaseHelper.reduceIndent(indentStr));
    sb.append(")");
    return sb.toString();
  }

  public void validate() throws TException {
    // check for required fields
  }

}

