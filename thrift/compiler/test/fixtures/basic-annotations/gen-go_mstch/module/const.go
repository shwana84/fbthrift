// @generated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
// This file is probably not the place you want to edit!

package module // thrift/compiler/test/fixtures/basic-annotations/src/module.thrift

import (
  cpp "thrift/annotation/cpp"
  "github.com/facebook/fbthrift/thrift/lib/go/thrift"
)

var _ = cpp.GoUnusedProtection__
// (needed to ensure safety because of naive import list construction)
var _ = thrift.ZERO

var GoUnusedProtection__ int

var MyStruct MyStruct = *NewMyStruct().
    SetMajor(42).
    SetPackage("package").
    SetMyEnum(MyEnum_DOMAIN)