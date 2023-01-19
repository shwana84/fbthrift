// @generated by Thrift for thrift/compiler/test/fixtures/includes/src/matching_names.thrift
// This file is probably not the place you want to edit!

package matching_names // thrift/compiler/test/fixtures/includes/src/matching_names.thrift

import (
  "fmt"

  includesAlso "IncludesAlso"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = includesAlso.GoUnusedProtection__

// (needed to ensure safety because of naive import list construction)
var _ = fmt.Printf
var _ = thrift.ZERO


type IncludesAlso struct {
    Also *includesAlso.Also `thrift:"also,1" json:"also" db:"also"`
}
// Compile time interface enforcer
var _ thrift.Struct = &IncludesAlso{}

func NewIncludesAlso() *IncludesAlso {
    return (&IncludesAlso{})
}
func (x *IncludesAlso) GetAlso() *includesAlso.Also {
    return x.Also
}

func (x *IncludesAlso) SetAlso(also includesAlso.Also) *IncludesAlso {
    x.Also = &also
    return x
}

func (x *IncludesAlso) IsSetAlso() bool {
    return x.Also != nil
}

func (x *IncludesAlso) writeField1(p thrift.Protocol) error {  // Also
    if !x.IsSetAlso() {
        return nil
    }

    if err := p.WriteFieldBegin("also", thrift.STRUCT, 1); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field begin error: ", x), err)
    }

    item := *x.GetAlso()
    if err := item.Write(p); err != nil {
    return err
}

    if err := p.WriteFieldEnd(); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write field end error: ", x), err)
    }
    return nil
}

func (x *IncludesAlso) readField1(p thrift.Protocol) error {  // Also
    result := *includesAlso.NewAlso()
err := result.Read(p)
if err != nil {
    return err
}

    x.SetAlso(result)
    return nil
}


// Deprecated: Use IncludesAlso.Set* methods instead or set the fields directly.
type IncludesAlsoBuilder struct {
    obj *IncludesAlso
}

func NewIncludesAlsoBuilder() *IncludesAlsoBuilder {
    return &IncludesAlsoBuilder{
        obj: NewIncludesAlso(),
    }
}

func (x *IncludesAlsoBuilder) Also(also *includesAlso.Also) *IncludesAlsoBuilder {
    x.obj.Also = also
    return x
}

func (x *IncludesAlsoBuilder) Emit() *IncludesAlso {
    var objCopy IncludesAlso = *x.obj
    return &objCopy
}

func (x *IncludesAlso) Write(p thrift.Protocol) error {
    if err := p.WriteStructBegin("IncludesAlso"); err != nil {
        return thrift.PrependError(fmt.Sprintf("%T write struct begin error: ", x), err)
    }

    if err := x.writeField1(p); err != nil {
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

func (x *IncludesAlso) Read(p thrift.Protocol) error {
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
        case 1:  // also
            if err := x.readField1(p); err != nil {
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