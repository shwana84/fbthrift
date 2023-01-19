// @generated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
// This file is probably not the place you want to edit!

package module // thrift/compiler/test/fixtures/enums/src/module.thrift

import (
  "fmt"

  thrift0 "thrift/annotation/thrift"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = thrift0.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type Metasyntactic int32

const (
    Metasyntactic_FOO Metasyntactic = 1
    Metasyntactic_BAR Metasyntactic = 2
    Metasyntactic_BAZ Metasyntactic = 3
    Metasyntactic_BAX Metasyntactic = 4
    Metasyntactic_Unspecified Metasyntactic = 0
)

// Enum value maps for Metasyntactic
var (
    Metasyntactic_name = map[Metasyntactic]string {
        Metasyntactic_FOO: "FOO",
        Metasyntactic_BAR: "BAR",
        Metasyntactic_BAZ: "BAZ",
        Metasyntactic_BAX: "BAX",
        Metasyntactic_Unspecified: "Unspecified",
    }

    Metasyntactic_value = map[string]Metasyntactic {
        "FOO": Metasyntactic_FOO,
        "BAR": Metasyntactic_BAR,
        "BAZ": Metasyntactic_BAZ,
        "BAX": Metasyntactic_BAX,
        "Unspecified": Metasyntactic_Unspecified,
    }

    // Deprecated: Use Metasyntactic_name instead.
    MetasyntacticToName = Metasyntactic_name

    // Deprecated: Use Metasyntactic_value instead.
    MetasyntacticToValue = Metasyntactic_value

    // Deprecated: Use Metasyntactic_name instead (e.g. `for name, _ := range Metasyntactic_name {}`).
    MetasyntacticNames = []string{
        "FOO",
        "BAR",
        "BAZ",
        "BAX",
        "Unspecified",
    }

    // Deprecated: Use Metasyntactic_value instead (e.g. `for value, _ := range Metasyntactic_value {}`).
    MetasyntacticValues = []Metasyntactic{
        1,
        2,
        3,
        4,
        0,
    }
)

func (x Metasyntactic) String() string {
    if v, ok := MetasyntacticToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x Metasyntactic) Ptr() *Metasyntactic {
    return &x
}

// Deprecated: Use Metasyntactic_value instead (e.g. `x, ok := Metasyntactic_value["name"]`).
func MetasyntacticFromString(s string) (Metasyntactic, error) {
    if v, ok := Metasyntactic_value[s]; ok {
        return v, nil
    }
    return Metasyntactic(0), fmt.Errorf("not a valid Metasyntactic string")
}

// Deprecated: Use Metasyntactic.Ptr() instead.
func MetasyntacticPtr(v Metasyntactic) *Metasyntactic {
    return &v
}


type MyEnum1 int32

const (
    MyEnum1_ME1_1 MyEnum1 = 1
    MyEnum1_ME1_2 MyEnum1 = 2
    MyEnum1_ME1_3 MyEnum1 = 3
    MyEnum1_ME1_5 MyEnum1 = 5
    MyEnum1_ME1_6 MyEnum1 = 6
    MyEnum1_ME1_0 MyEnum1 = 0
)

// Enum value maps for MyEnum1
var (
    MyEnum1_name = map[MyEnum1]string {
        MyEnum1_ME1_1: "ME1_1",
        MyEnum1_ME1_2: "ME1_2",
        MyEnum1_ME1_3: "ME1_3",
        MyEnum1_ME1_5: "ME1_5",
        MyEnum1_ME1_6: "ME1_6",
        MyEnum1_ME1_0: "ME1_0",
    }

    MyEnum1_value = map[string]MyEnum1 {
        "ME1_1": MyEnum1_ME1_1,
        "ME1_2": MyEnum1_ME1_2,
        "ME1_3": MyEnum1_ME1_3,
        "ME1_5": MyEnum1_ME1_5,
        "ME1_6": MyEnum1_ME1_6,
        "ME1_0": MyEnum1_ME1_0,
    }

    // Deprecated: Use MyEnum1_name instead.
    MyEnum1ToName = MyEnum1_name

    // Deprecated: Use MyEnum1_value instead.
    MyEnum1ToValue = MyEnum1_value

    // Deprecated: Use MyEnum1_name instead (e.g. `for name, _ := range MyEnum1_name {}`).
    MyEnum1Names = []string{
        "ME1_1",
        "ME1_2",
        "ME1_3",
        "ME1_5",
        "ME1_6",
        "ME1_0",
    }

    // Deprecated: Use MyEnum1_value instead (e.g. `for value, _ := range MyEnum1_value {}`).
    MyEnum1Values = []MyEnum1{
        1,
        2,
        3,
        5,
        6,
        0,
    }
)

func (x MyEnum1) String() string {
    if v, ok := MyEnum1ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum1) Ptr() *MyEnum1 {
    return &x
}

// Deprecated: Use MyEnum1_value instead (e.g. `x, ok := MyEnum1_value["name"]`).
func MyEnum1FromString(s string) (MyEnum1, error) {
    if v, ok := MyEnum1_value[s]; ok {
        return v, nil
    }
    return MyEnum1(0), fmt.Errorf("not a valid MyEnum1 string")
}

// Deprecated: Use MyEnum1.Ptr() instead.
func MyEnum1Ptr(v MyEnum1) *MyEnum1 {
    return &v
}


type MyEnum2 int32

const (
    MyEnum2_ME2_0 MyEnum2 = 0
    MyEnum2_ME2_1 MyEnum2 = 1
    MyEnum2_ME2_2 MyEnum2 = 2
)

// Enum value maps for MyEnum2
var (
    MyEnum2_name = map[MyEnum2]string {
        MyEnum2_ME2_0: "ME2_0",
        MyEnum2_ME2_1: "ME2_1",
        MyEnum2_ME2_2: "ME2_2",
    }

    MyEnum2_value = map[string]MyEnum2 {
        "ME2_0": MyEnum2_ME2_0,
        "ME2_1": MyEnum2_ME2_1,
        "ME2_2": MyEnum2_ME2_2,
    }

    // Deprecated: Use MyEnum2_name instead.
    MyEnum2ToName = MyEnum2_name

    // Deprecated: Use MyEnum2_value instead.
    MyEnum2ToValue = MyEnum2_value

    // Deprecated: Use MyEnum2_name instead (e.g. `for name, _ := range MyEnum2_name {}`).
    MyEnum2Names = []string{
        "ME2_0",
        "ME2_1",
        "ME2_2",
    }

    // Deprecated: Use MyEnum2_value instead (e.g. `for value, _ := range MyEnum2_value {}`).
    MyEnum2Values = []MyEnum2{
        0,
        1,
        2,
    }
)

func (x MyEnum2) String() string {
    if v, ok := MyEnum2ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum2) Ptr() *MyEnum2 {
    return &x
}

// Deprecated: Use MyEnum2_value instead (e.g. `x, ok := MyEnum2_value["name"]`).
func MyEnum2FromString(s string) (MyEnum2, error) {
    if v, ok := MyEnum2_value[s]; ok {
        return v, nil
    }
    return MyEnum2(0), fmt.Errorf("not a valid MyEnum2 string")
}

// Deprecated: Use MyEnum2.Ptr() instead.
func MyEnum2Ptr(v MyEnum2) *MyEnum2 {
    return &v
}


type MyEnum3 int32

const (
    MyEnum3_ME3_0 MyEnum3 = 0
    MyEnum3_ME3_1 MyEnum3 = 1
    MyEnum3_ME3_N2 MyEnum3 = -2
    MyEnum3_ME3_N1 MyEnum3 = -1
    MyEnum3_ME3_9 MyEnum3 = 9
    MyEnum3_ME3_10 MyEnum3 = 10
)

// Enum value maps for MyEnum3
var (
    MyEnum3_name = map[MyEnum3]string {
        MyEnum3_ME3_0: "ME3_0",
        MyEnum3_ME3_1: "ME3_1",
        MyEnum3_ME3_N2: "ME3_N2",
        MyEnum3_ME3_N1: "ME3_N1",
        MyEnum3_ME3_9: "ME3_9",
        MyEnum3_ME3_10: "ME3_10",
    }

    MyEnum3_value = map[string]MyEnum3 {
        "ME3_0": MyEnum3_ME3_0,
        "ME3_1": MyEnum3_ME3_1,
        "ME3_N2": MyEnum3_ME3_N2,
        "ME3_N1": MyEnum3_ME3_N1,
        "ME3_9": MyEnum3_ME3_9,
        "ME3_10": MyEnum3_ME3_10,
    }

    // Deprecated: Use MyEnum3_name instead.
    MyEnum3ToName = MyEnum3_name

    // Deprecated: Use MyEnum3_value instead.
    MyEnum3ToValue = MyEnum3_value

    // Deprecated: Use MyEnum3_name instead (e.g. `for name, _ := range MyEnum3_name {}`).
    MyEnum3Names = []string{
        "ME3_0",
        "ME3_1",
        "ME3_N2",
        "ME3_N1",
        "ME3_9",
        "ME3_10",
    }

    // Deprecated: Use MyEnum3_value instead (e.g. `for value, _ := range MyEnum3_value {}`).
    MyEnum3Values = []MyEnum3{
        0,
        1,
        -2,
        -1,
        9,
        10,
    }
)

func (x MyEnum3) String() string {
    if v, ok := MyEnum3ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum3) Ptr() *MyEnum3 {
    return &x
}

// Deprecated: Use MyEnum3_value instead (e.g. `x, ok := MyEnum3_value["name"]`).
func MyEnum3FromString(s string) (MyEnum3, error) {
    if v, ok := MyEnum3_value[s]; ok {
        return v, nil
    }
    return MyEnum3(0), fmt.Errorf("not a valid MyEnum3 string")
}

// Deprecated: Use MyEnum3.Ptr() instead.
func MyEnum3Ptr(v MyEnum3) *MyEnum3 {
    return &v
}


type MyEnum4 int32

const (
    MyEnum4_ME4_A MyEnum4 = 2147483645
    MyEnum4_ME4_B MyEnum4 = 2147483646
    MyEnum4_ME4_C MyEnum4 = 2147483647
    MyEnum4_ME4_D MyEnum4 = -2147483648
    MyEnum4_Unspecified MyEnum4 = 0
)

// Enum value maps for MyEnum4
var (
    MyEnum4_name = map[MyEnum4]string {
        MyEnum4_ME4_A: "ME4_A",
        MyEnum4_ME4_B: "ME4_B",
        MyEnum4_ME4_C: "ME4_C",
        MyEnum4_ME4_D: "ME4_D",
        MyEnum4_Unspecified: "Unspecified",
    }

    MyEnum4_value = map[string]MyEnum4 {
        "ME4_A": MyEnum4_ME4_A,
        "ME4_B": MyEnum4_ME4_B,
        "ME4_C": MyEnum4_ME4_C,
        "ME4_D": MyEnum4_ME4_D,
        "Unspecified": MyEnum4_Unspecified,
    }

    // Deprecated: Use MyEnum4_name instead.
    MyEnum4ToName = MyEnum4_name

    // Deprecated: Use MyEnum4_value instead.
    MyEnum4ToValue = MyEnum4_value

    // Deprecated: Use MyEnum4_name instead (e.g. `for name, _ := range MyEnum4_name {}`).
    MyEnum4Names = []string{
        "ME4_A",
        "ME4_B",
        "ME4_C",
        "ME4_D",
        "Unspecified",
    }

    // Deprecated: Use MyEnum4_value instead (e.g. `for value, _ := range MyEnum4_value {}`).
    MyEnum4Values = []MyEnum4{
        2147483645,
        2147483646,
        2147483647,
        -2147483648,
        0,
    }
)

func (x MyEnum4) String() string {
    if v, ok := MyEnum4ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyEnum4) Ptr() *MyEnum4 {
    return &x
}

// Deprecated: Use MyEnum4_value instead (e.g. `x, ok := MyEnum4_value["name"]`).
func MyEnum4FromString(s string) (MyEnum4, error) {
    if v, ok := MyEnum4_value[s]; ok {
        return v, nil
    }
    return MyEnum4(0), fmt.Errorf("not a valid MyEnum4 string")
}

// Deprecated: Use MyEnum4.Ptr() instead.
func MyEnum4Ptr(v MyEnum4) *MyEnum4 {
    return &v
}


type MyBitmaskEnum1 int32

const (
    MyBitmaskEnum1_ONE MyBitmaskEnum1 = 1
    MyBitmaskEnum1_TWO MyBitmaskEnum1 = 2
    MyBitmaskEnum1_FOUR MyBitmaskEnum1 = 4
    MyBitmaskEnum1_Unspecified MyBitmaskEnum1 = 0
)

// Enum value maps for MyBitmaskEnum1
var (
    MyBitmaskEnum1_name = map[MyBitmaskEnum1]string {
        MyBitmaskEnum1_ONE: "ONE",
        MyBitmaskEnum1_TWO: "TWO",
        MyBitmaskEnum1_FOUR: "FOUR",
        MyBitmaskEnum1_Unspecified: "Unspecified",
    }

    MyBitmaskEnum1_value = map[string]MyBitmaskEnum1 {
        "ONE": MyBitmaskEnum1_ONE,
        "TWO": MyBitmaskEnum1_TWO,
        "FOUR": MyBitmaskEnum1_FOUR,
        "Unspecified": MyBitmaskEnum1_Unspecified,
    }

    // Deprecated: Use MyBitmaskEnum1_name instead.
    MyBitmaskEnum1ToName = MyBitmaskEnum1_name

    // Deprecated: Use MyBitmaskEnum1_value instead.
    MyBitmaskEnum1ToValue = MyBitmaskEnum1_value

    // Deprecated: Use MyBitmaskEnum1_name instead (e.g. `for name, _ := range MyBitmaskEnum1_name {}`).
    MyBitmaskEnum1Names = []string{
        "ONE",
        "TWO",
        "FOUR",
        "Unspecified",
    }

    // Deprecated: Use MyBitmaskEnum1_value instead (e.g. `for value, _ := range MyBitmaskEnum1_value {}`).
    MyBitmaskEnum1Values = []MyBitmaskEnum1{
        1,
        2,
        4,
        0,
    }
)

func (x MyBitmaskEnum1) String() string {
    if v, ok := MyBitmaskEnum1ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyBitmaskEnum1) Ptr() *MyBitmaskEnum1 {
    return &x
}

// Deprecated: Use MyBitmaskEnum1_value instead (e.g. `x, ok := MyBitmaskEnum1_value["name"]`).
func MyBitmaskEnum1FromString(s string) (MyBitmaskEnum1, error) {
    if v, ok := MyBitmaskEnum1_value[s]; ok {
        return v, nil
    }
    return MyBitmaskEnum1(0), fmt.Errorf("not a valid MyBitmaskEnum1 string")
}

// Deprecated: Use MyBitmaskEnum1.Ptr() instead.
func MyBitmaskEnum1Ptr(v MyBitmaskEnum1) *MyBitmaskEnum1 {
    return &v
}


type MyBitmaskEnum2 int32

const (
    MyBitmaskEnum2_ONE MyBitmaskEnum2 = 1
    MyBitmaskEnum2_TWO MyBitmaskEnum2 = 2
    MyBitmaskEnum2_FOUR MyBitmaskEnum2 = 4
    MyBitmaskEnum2_Unspecified MyBitmaskEnum2 = 0
)

// Enum value maps for MyBitmaskEnum2
var (
    MyBitmaskEnum2_name = map[MyBitmaskEnum2]string {
        MyBitmaskEnum2_ONE: "ONE",
        MyBitmaskEnum2_TWO: "TWO",
        MyBitmaskEnum2_FOUR: "FOUR",
        MyBitmaskEnum2_Unspecified: "Unspecified",
    }

    MyBitmaskEnum2_value = map[string]MyBitmaskEnum2 {
        "ONE": MyBitmaskEnum2_ONE,
        "TWO": MyBitmaskEnum2_TWO,
        "FOUR": MyBitmaskEnum2_FOUR,
        "Unspecified": MyBitmaskEnum2_Unspecified,
    }

    // Deprecated: Use MyBitmaskEnum2_name instead.
    MyBitmaskEnum2ToName = MyBitmaskEnum2_name

    // Deprecated: Use MyBitmaskEnum2_value instead.
    MyBitmaskEnum2ToValue = MyBitmaskEnum2_value

    // Deprecated: Use MyBitmaskEnum2_name instead (e.g. `for name, _ := range MyBitmaskEnum2_name {}`).
    MyBitmaskEnum2Names = []string{
        "ONE",
        "TWO",
        "FOUR",
        "Unspecified",
    }

    // Deprecated: Use MyBitmaskEnum2_value instead (e.g. `for value, _ := range MyBitmaskEnum2_value {}`).
    MyBitmaskEnum2Values = []MyBitmaskEnum2{
        1,
        2,
        4,
        0,
    }
)

func (x MyBitmaskEnum2) String() string {
    if v, ok := MyBitmaskEnum2ToName[x]; ok {
        return v
    }
    return "<UNSET>"
}

func (x MyBitmaskEnum2) Ptr() *MyBitmaskEnum2 {
    return &x
}

// Deprecated: Use MyBitmaskEnum2_value instead (e.g. `x, ok := MyBitmaskEnum2_value["name"]`).
func MyBitmaskEnum2FromString(s string) (MyBitmaskEnum2, error) {
    if v, ok := MyBitmaskEnum2_value[s]; ok {
        return v, nil
    }
    return MyBitmaskEnum2(0), fmt.Errorf("not a valid MyBitmaskEnum2 string")
}

// Deprecated: Use MyBitmaskEnum2.Ptr() instead.
func MyBitmaskEnum2Ptr(v MyBitmaskEnum2) *MyBitmaskEnum2 {
    return &v
}


type SomeStruct struct {
    Reasonable Metasyntactic `thrift:"reasonable,1" json:"reasonable" db:"reasonable"`
    Fine Metasyntactic `thrift:"fine,2" json:"fine" db:"fine"`
    Questionable Metasyntactic `thrift:"questionable,3" json:"questionable" db:"questionable"`
    Tags []int32 `thrift:"tags,4" json:"tags" db:"tags"`
}
// Compile time interface enforcer
var _ thrift.Struct = &SomeStruct{}

func NewSomeStruct() *SomeStruct {
    return (&SomeStruct{}).
        SetReasonable(
            Metasyntactic_FOO,
        ).
        SetFine(
            Metasyntactic_BAR,
        ).
        SetQuestionable(
            Metasyntactic(-1),
        ).
        SetTags(
            []int32{
},
        )
}
func (x *SomeStruct) GetReasonable() Metasyntactic {
    return x.Reasonable
}

func (x *SomeStruct) GetFine() Metasyntactic {
    return x.Fine
}

func (x *SomeStruct) GetQuestionable() Metasyntactic {
    return x.Questionable
}

func (x *SomeStruct) GetTags() []int32 {
    return x.Tags
}

func (x *SomeStruct) SetReasonable(reasonable Metasyntactic) *SomeStruct {
    x.Reasonable = reasonable
    return x
}

func (x *SomeStruct) SetFine(fine Metasyntactic) *SomeStruct {
    x.Fine = fine
    return x
}

func (x *SomeStruct) SetQuestionable(questionable Metasyntactic) *SomeStruct {
    x.Questionable = questionable
    return x
}

func (x *SomeStruct) SetTags(tags []int32) *SomeStruct {
    x.Tags = tags
    return x
}




func (x *SomeStruct) IsSetTags() bool {
    return x.Tags != nil
}

func (x *SomeStruct) writeField1(p thrift.Protocol) error {  // Reasonable
    if err := p.WriteFieldBegin("reasonable", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetReasonable()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField2(p thrift.Protocol) error {  // Fine
    if err := p.WriteFieldBegin("fine", thrift.I32, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetFine()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField3(p thrift.Protocol) error {  // Questionable
    if err := p.WriteFieldBegin("questionable", thrift.I32, 3); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetQuestionable()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) writeField4(p thrift.Protocol) error {  // Tags
    if !x.IsSetTags() {
        return nil
    }

    if err := p.WriteFieldBegin("tags", thrift.SET, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetTags()
    if err := p.WriteSetBegin(thrift.I32, len(item)); err != nil {
    return thrift.PrependError("error writing set begin: ", err)
}
for _, v := range item {
    {
        item := v
        if err := p.WriteI32(item); err != nil {
    return err
}
    }
}
if err := p.WriteSetEnd(); err != nil {
    return thrift.PrependError("error writing set end: ", err)
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) readField1(p thrift.Protocol) error {  // Reasonable
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetReasonable(result)
    return nil
}

func (x *SomeStruct) readField2(p thrift.Protocol) error {  // Fine
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetFine(result)
    return nil
}

func (x *SomeStruct) readField3(p thrift.Protocol) error {  // Questionable
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := Metasyntactic(enumResult)

    x.SetQuestionable(result)
    return nil
}

func (x *SomeStruct) readField4(p thrift.Protocol) error {  // Tags
    _ /* elemType */, size, err := p.ReadSetBegin()
if err != nil {
    return thrift.PrependError("error reading set begin: ", err)
}

setResult := make([]int32, 0, size)
for i := 0; i < size; i++ {
    var elem int32
    {
        result, err := p.ReadI32()
if err != nil {
    return err
}
        elem = result
    }
    setResult = append(setResult, elem)
}

if err := p.ReadSetEnd(); err != nil {
    return thrift.PrependError("error reading set end: ", err)
}
result := setResult

    x.SetTags(result)
    return nil
}


// Deprecated: Use SomeStruct.Set* methods instead or set the fields directly.
type SomeStructBuilder struct {
    obj *SomeStruct
}

func NewSomeStructBuilder() *SomeStructBuilder {
    return &SomeStructBuilder{
        obj: NewSomeStruct(),
    }
}

func (x *SomeStructBuilder) Reasonable(reasonable Metasyntactic) *SomeStructBuilder {
    x.obj.Reasonable = reasonable
    return x
}

func (x *SomeStructBuilder) Fine(fine Metasyntactic) *SomeStructBuilder {
    x.obj.Fine = fine
    return x
}

func (x *SomeStructBuilder) Questionable(questionable Metasyntactic) *SomeStructBuilder {
    x.obj.Questionable = questionable
    return x
}

func (x *SomeStructBuilder) Tags(tags []int32) *SomeStructBuilder {
    x.obj.Tags = tags
    return x
}

func (x *SomeStructBuilder) Emit() *SomeStruct {
    var objCopy SomeStruct = *x.obj
    return &objCopy
}

func (x *SomeStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("SomeStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField3(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *SomeStruct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // reasonable
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // fine
            if err := x.readField2(p); err != nil {
                return err
            }
        case 3:  // questionable
            if err := x.readField3(p); err != nil {
                return err
            }
        case 4:  // tags
            if err := x.readField4(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}

type MyStruct struct {
    Me23 MyEnum2 `thrift:"me2_3,1" json:"me2_3" db:"me2_3"`
    Me3N3 MyEnum3 `thrift:"me3_n3,2" json:"me3_n3" db:"me3_n3"`
    Me1T1 MyEnum1 `thrift:"me1_t1,4" json:"me1_t1" db:"me1_t1"`
    Me1T2 MyEnum1 `thrift:"me1_t2,6" json:"me1_t2" db:"me1_t2"`
}
// Compile time interface enforcer
var _ thrift.Struct = &MyStruct{}

func NewMyStruct() *MyStruct {
    return (&MyStruct{}).
        SetMe23(
            MyEnum2(3),
        ).
        SetMe3N3(
            MyEnum3(-3),
        ).
        SetMe1T1(
            MyEnum1_ME1_1,
        ).
        SetMe1T2(
            MyEnum1_ME1_1,
        )
}
func (x *MyStruct) GetMe23() MyEnum2 {
    return x.Me23
}

func (x *MyStruct) GetMe3N3() MyEnum3 {
    return x.Me3N3
}

func (x *MyStruct) GetMe1T1() MyEnum1 {
    return x.Me1T1
}

func (x *MyStruct) GetMe1T2() MyEnum1 {
    return x.Me1T2
}

func (x *MyStruct) SetMe23(me23 MyEnum2) *MyStruct {
    x.Me23 = me23
    return x
}

func (x *MyStruct) SetMe3N3(me3N3 MyEnum3) *MyStruct {
    x.Me3N3 = me3N3
    return x
}

func (x *MyStruct) SetMe1T1(me1T1 MyEnum1) *MyStruct {
    x.Me1T1 = me1T1
    return x
}

func (x *MyStruct) SetMe1T2(me1T2 MyEnum1) *MyStruct {
    x.Me1T2 = me1T2
    return x
}





func (x *MyStruct) writeField1(p thrift.Protocol) error {  // Me23
    if err := p.WriteFieldBegin("me2_3", thrift.I32, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe23()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField2(p thrift.Protocol) error {  // Me3N3
    if err := p.WriteFieldBegin("me3_n3", thrift.I32, 2); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe3N3()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField4(p thrift.Protocol) error {  // Me1T1
    if err := p.WriteFieldBegin("me1_t1", thrift.I32, 4); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe1T1()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) writeField6(p thrift.Protocol) error {  // Me1T2
    if err := p.WriteFieldBegin("me1_t2", thrift.I32, 6); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := x.GetMe1T2()
    if err := p.WriteI32(int32(item)); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) readField1(p thrift.Protocol) error {  // Me23
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum2(enumResult)

    x.SetMe23(result)
    return nil
}

func (x *MyStruct) readField2(p thrift.Protocol) error {  // Me3N3
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum3(enumResult)

    x.SetMe3N3(result)
    return nil
}

func (x *MyStruct) readField4(p thrift.Protocol) error {  // Me1T1
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum1(enumResult)

    x.SetMe1T1(result)
    return nil
}

func (x *MyStruct) readField6(p thrift.Protocol) error {  // Me1T2
    enumResult, err := p.ReadI32()
if err != nil {
    return err
}
result := MyEnum1(enumResult)

    x.SetMe1T2(result)
    return nil
}


// Deprecated: Use MyStruct.Set* methods instead or set the fields directly.
type MyStructBuilder struct {
    obj *MyStruct
}

func NewMyStructBuilder() *MyStructBuilder {
    return &MyStructBuilder{
        obj: NewMyStruct(),
    }
}

func (x *MyStructBuilder) Me23(me23 MyEnum2) *MyStructBuilder {
    x.obj.Me23 = me23
    return x
}

func (x *MyStructBuilder) Me3N3(me3N3 MyEnum3) *MyStructBuilder {
    x.obj.Me3N3 = me3N3
    return x
}

func (x *MyStructBuilder) Me1T1(me1T1 MyEnum1) *MyStructBuilder {
    x.obj.Me1T1 = me1T1
    return x
}

func (x *MyStructBuilder) Me1T2(me1T2 MyEnum1) *MyStructBuilder {
    x.obj.Me1T2 = me1T2
    return x
}

func (x *MyStructBuilder) Emit() *MyStruct {
    var objCopy MyStruct = *x.obj
    return &objCopy
}

func (x *MyStruct) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("MyStruct"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
        return err
    }

    if err := x.writeField2(p); err != nil {
        return err
    }

    if err := x.writeField4(p); err != nil {
        return err
    }

    if err := x.writeField6(p); err != nil {
        return err
    }

    if err := p.WriteFieldStop(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field stop error: ", x), err)
    }

    if err := p.WriteStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct end error: ", x), err)
    }
    return nil
}

func (x *MyStruct) Read(p thrift.Protocol) error {
    if _, err := p.ReadStructBegin(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read error: ", x), err)
    }

    for {
        _, typ, id, err := p.ReadFieldBegin()
        if err != nil {
            return thrift.PrependError(fmt.Sprintf("%T field %d read error: ", x, id), err)
        }

        if typ == thrift.STOP {
            break;
        }

        switch id {
        case 1:  // me2_3
            if err := x.readField1(p); err != nil {
                return err
            }
        case 2:  // me3_n3
            if err := x.readField2(p); err != nil {
                return err
            }
        case 4:  // me1_t1
            if err := x.readField4(p); err != nil {
                return err
            }
        case 6:  // me1_t2
            if err := x.readField6(p); err != nil {
                return err
            }
        default:
            if err := p.Skip(typ); err != nil {
                return err
            }
        }

        if err := p.ReadFieldEnd(); err != nil {
            return err
        }
    }

    if err := p.ReadStructEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T read struct end error: ", x), err)
    }

    return nil
}