// Code generated by protoc-gen-go-copy. DO NOT EDIT.
// source: google/protobuf/struct.proto

package structpb

// Proto_ShallowCopy copies fields, from v to the receiver, using field getters.
// Note that v is of an arbitrary type, which may implement any number of the
// field getters, which are defined as any methods of the same signature as those
// generated for the receiver type, with a name starting with Get.
// WARNING: Optional fields may be ignored, if v is not the receiver type.
func (x *Struct) Proto_ShallowCopy(v interface{}) {
	switch v := v.(type) {
	case *Struct:
		x.Fields = v.GetFields()
	default:
		if v, ok := v.(interface{ GetFields() map[string]*Value }); ok {
			x.Fields = v.GetFields()
		}
	}
}

// Proto_ShallowClone returns a shallow copy of the receiver or nil if it's nil.
func (x *Struct) Proto_ShallowClone() (c *Struct) {
	if x != nil {
		c = new(Struct)
		c.Fields = x.Fields
	}
	return
}

// Proto_ShallowCopy copies fields, from v to the receiver, using field getters.
// Note that v is of an arbitrary type, which may implement any number of the
// field getters, which are defined as any methods of the same signature as those
// generated for the receiver type, with a name starting with Get.
// WARNING: Optional fields may be ignored, if v is not the receiver type.
func (x *Value) Proto_ShallowCopy(v interface{}) {
	switch v := v.(type) {
	case *Value:
		x.Kind = v.GetKind()
	default:
		if v, ok := v.(interface{ GetKind() isValue_Kind }); ok {
			x.Kind = v.GetKind()
		} else {
			func() {
				if v, ok := v.(interface{ GetNullValue() NullValue }); ok {
					var defaultValue NullValue
					if v := v.GetNullValue(); v != defaultValue {
						x.Kind = &Value_NullValue{NullValue: v}
						return
					}
				}
				if v, ok := v.(interface{ GetNumberValue() float64 }); ok {
					var defaultValue float64
					if v := v.GetNumberValue(); v != defaultValue {
						x.Kind = &Value_NumberValue{NumberValue: v}
						return
					}
				}
				if v, ok := v.(interface{ GetStringValue() string }); ok {
					var defaultValue string
					if v := v.GetStringValue(); v != defaultValue {
						x.Kind = &Value_StringValue{StringValue: v}
						return
					}
				}
				if v, ok := v.(interface{ GetBoolValue() bool }); ok {
					var defaultValue bool
					if v := v.GetBoolValue(); v != defaultValue {
						x.Kind = &Value_BoolValue{BoolValue: v}
						return
					}
				}
				if v, ok := v.(interface{ GetStructValue() *Struct }); ok {
					var defaultValue *Struct
					if v := v.GetStructValue(); v != defaultValue {
						x.Kind = &Value_StructValue{StructValue: v}
						return
					}
				}
				if v, ok := v.(interface{ GetListValue() *ListValue }); ok {
					var defaultValue *ListValue
					if v := v.GetListValue(); v != defaultValue {
						x.Kind = &Value_ListValue{ListValue: v}
						return
					}
				}
			}()
		}
	}
}

// Proto_ShallowClone returns a shallow copy of the receiver or nil if it's nil.
func (x *Value) Proto_ShallowClone() (c *Value) {
	if x != nil {
		c = new(Value)
		c.Kind = x.Kind
	}
	return
}

// Proto_ShallowCopy copies fields, from v to the receiver, using field getters.
// Note that v is of an arbitrary type, which may implement any number of the
// field getters, which are defined as any methods of the same signature as those
// generated for the receiver type, with a name starting with Get.
// WARNING: Optional fields may be ignored, if v is not the receiver type.
func (x *ListValue) Proto_ShallowCopy(v interface{}) {
	switch v := v.(type) {
	case *ListValue:
		x.Values = v.GetValues()
	default:
		if v, ok := v.(interface{ GetValues() []*Value }); ok {
			x.Values = v.GetValues()
		}
	}
}

// Proto_ShallowClone returns a shallow copy of the receiver or nil if it's nil.
func (x *ListValue) Proto_ShallowClone() (c *ListValue) {
	if x != nil {
		c = new(ListValue)
		c.Values = x.Values
	}
	return
}
