// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0
// 	protoc        v3.13.0
// source: kentik/core/v202012alpha1/errors.proto

package kentik_api

import (
	proto "github.com/golang/protobuf/proto"
	_ "github.com/grpc-ecosystem/grpc-gateway/v2/protoc-gen-openapiv2/options"
	_ "google.golang.org/genproto/googleapis/api/annotations"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
	timestamppb "google.golang.org/protobuf/types/known/timestamppb"
	reflect "reflect"
	sync "sync"
)

const (
	// Verify that this generated code is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(20 - protoimpl.MinVersion)
	// Verify that runtime/protoimpl is sufficiently up-to-date.
	_ = protoimpl.EnforceVersion(protoimpl.MaxVersion - 20)
)

// This is a compile-time assertion that a sufficiently up-to-date version
// of the legacy proto package is being used.
const _ = proto.ProtoPackageIsVersion4

type ErrorInfo struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Code              int32                  `protobuf:"varint,1,opt,name=code,proto3" json:"code,omitempty"`
	Message           string                 `protobuf:"bytes,2,opt,name=message,proto3" json:"message,omitempty"`
	CorrelationId     string                 `protobuf:"bytes,3,opt,name=correlation_id,json=correlationId,proto3" json:"correlation_id,omitempty"`
	Timestamp         *timestamppb.Timestamp `protobuf:"bytes,4,opt,name=timestamp,proto3" json:"timestamp,omitempty"`
	DocumentationLink string                 `protobuf:"bytes,5,opt,name=documentation_link,json=documentationLink,proto3" json:"documentation_link,omitempty"`
}

func (x *ErrorInfo) Reset() {
	*x = ErrorInfo{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_core_v202012alpha1_errors_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ErrorInfo) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ErrorInfo) ProtoMessage() {}

func (x *ErrorInfo) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_core_v202012alpha1_errors_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ErrorInfo.ProtoReflect.Descriptor instead.
func (*ErrorInfo) Descriptor() ([]byte, []int) {
	return file_kentik_core_v202012alpha1_errors_proto_rawDescGZIP(), []int{0}
}

func (x *ErrorInfo) GetCode() int32 {
	if x != nil {
		return x.Code
	}
	return 0
}

func (x *ErrorInfo) GetMessage() string {
	if x != nil {
		return x.Message
	}
	return ""
}

func (x *ErrorInfo) GetCorrelationId() string {
	if x != nil {
		return x.CorrelationId
	}
	return ""
}

func (x *ErrorInfo) GetTimestamp() *timestamppb.Timestamp {
	if x != nil {
		return x.Timestamp
	}
	return nil
}

func (x *ErrorInfo) GetDocumentationLink() string {
	if x != nil {
		return x.DocumentationLink
	}
	return ""
}

var File_kentik_core_v202012alpha1_errors_proto protoreflect.FileDescriptor

var file_kentik_core_v202012alpha1_errors_proto_rawDesc = []byte{
	0x0a, 0x26, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x63, 0x6f, 0x72, 0x65, 0x2f, 0x76, 0x32,
	0x30, 0x32, 0x30, 0x31, 0x32, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2f, 0x65, 0x72, 0x72, 0x6f,
	0x72, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x19, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b,
	0x2e, 0x63, 0x6f, 0x72, 0x65, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x30, 0x31, 0x32, 0x61, 0x6c, 0x70,
	0x68, 0x61, 0x31, 0x1a, 0x1c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f,
	0x61, 0x6e, 0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74,
	0x6f, 0x1a, 0x17, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x63, 0x6c,
	0x69, 0x65, 0x6e, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x1f, 0x67, 0x6f, 0x6f, 0x67,
	0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2f, 0x74, 0x69, 0x6d, 0x65,
	0x73, 0x74, 0x61, 0x6d, 0x70, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x2e, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x63, 0x2d, 0x67, 0x65, 0x6e, 0x2d, 0x6f, 0x70, 0x65, 0x6e, 0x61, 0x70, 0x69, 0x76,
	0x32, 0x2f, 0x6f, 0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2f, 0x61, 0x6e, 0x6e, 0x6f, 0x74, 0x61,
	0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0x86, 0x03, 0x0a, 0x09,
	0x45, 0x72, 0x72, 0x6f, 0x72, 0x49, 0x6e, 0x66, 0x6f, 0x12, 0x23, 0x0a, 0x04, 0x63, 0x6f, 0x64,
	0x65, 0x18, 0x01, 0x20, 0x01, 0x28, 0x05, 0x42, 0x0f, 0x92, 0x41, 0x0c, 0x32, 0x0a, 0x45, 0x72,
	0x72, 0x6f, 0x72, 0x20, 0x63, 0x6f, 0x64, 0x65, 0x52, 0x04, 0x63, 0x6f, 0x64, 0x65, 0x12, 0x2c,
	0x0a, 0x07, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x42,
	0x12, 0x92, 0x41, 0x0f, 0x32, 0x0d, 0x45, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x6d, 0x65, 0x73, 0x73,
	0x61, 0x67, 0x65, 0x52, 0x07, 0x6d, 0x65, 0x73, 0x73, 0x61, 0x67, 0x65, 0x12, 0x57, 0x0a, 0x0e,
	0x63, 0x6f, 0x72, 0x72, 0x65, 0x6c, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x69, 0x64, 0x18, 0x03,
	0x20, 0x01, 0x28, 0x09, 0x42, 0x30, 0x92, 0x41, 0x2d, 0x32, 0x2b, 0x55, 0x6e, 0x69, 0x71, 0x75,
	0x65, 0x20, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x20, 0x69, 0x64, 0x65, 0x6e, 0x74, 0x69, 0x66, 0x69,
	0x65, 0x72, 0x20, 0x66, 0x6f, 0x72, 0x20, 0x73, 0x65, 0x72, 0x76, 0x65, 0x72, 0x20, 0x72, 0x65,
	0x71, 0x75, 0x65, 0x73, 0x74, 0x73, 0x52, 0x0d, 0x63, 0x6f, 0x72, 0x72, 0x65, 0x6c, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x49, 0x64, 0x12, 0x64, 0x0a, 0x09, 0x74, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61,
	0x6d, 0x70, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1a, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c,
	0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2e, 0x54, 0x69, 0x6d, 0x65, 0x73,
	0x74, 0x61, 0x6d, 0x70, 0x42, 0x2a, 0x92, 0x41, 0x27, 0x32, 0x25, 0x44, 0x61, 0x74, 0x65, 0x20,
	0x61, 0x6e, 0x64, 0x20, 0x74, 0x69, 0x6d, 0x65, 0x20, 0x77, 0x68, 0x65, 0x6e, 0x20, 0x74, 0x68,
	0x69, 0x73, 0x20, 0x65, 0x72, 0x72, 0x6f, 0x72, 0x20, 0x6f, 0x63, 0x63, 0x75, 0x72, 0x65, 0x64,
	0x52, 0x09, 0x74, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x12, 0x67, 0x0a, 0x12, 0x64,
	0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x6c, 0x69, 0x6e,
	0x6b, 0x18, 0x05, 0x20, 0x01, 0x28, 0x09, 0x42, 0x38, 0x92, 0x41, 0x35, 0x32, 0x33, 0x4f, 0x70,
	0x74, 0x69, 0x6f, 0x6e, 0x61, 0x6c, 0x20, 0x6c, 0x69, 0x6e, 0x6b, 0x20, 0x74, 0x6f, 0x20, 0x64,
	0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x72, 0x65, 0x67,
	0x61, 0x72, 0x64, 0x69, 0x6e, 0x67, 0x20, 0x74, 0x68, 0x69, 0x73, 0x20, 0x65, 0x72, 0x72, 0x6f,
	0x72, 0x52, 0x11, 0x64, 0x6f, 0x63, 0x75, 0x6d, 0x65, 0x6e, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e,
	0x4c, 0x69, 0x6e, 0x6b, 0x42, 0x4a, 0x5a, 0x48, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e, 0x63,
	0x6f, 0x6d, 0x2f, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x61, 0x70, 0x69, 0x2d, 0x73, 0x63,
	0x68, 0x65, 0x6d, 0x61, 0x2f, 0x67, 0x65, 0x6e, 0x2f, 0x67, 0x6f, 0x2f, 0x6b, 0x65, 0x6e, 0x74,
	0x69, 0x6b, 0x2f, 0x63, 0x6f, 0x72, 0x65, 0x2f, 0x76, 0x32, 0x30, 0x32, 0x30, 0x31, 0x32, 0x61,
	0x6c, 0x70, 0x68, 0x61, 0x31, 0x3b, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x5f, 0x61, 0x70, 0x69,
	0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_kentik_core_v202012alpha1_errors_proto_rawDescOnce sync.Once
	file_kentik_core_v202012alpha1_errors_proto_rawDescData = file_kentik_core_v202012alpha1_errors_proto_rawDesc
)

func file_kentik_core_v202012alpha1_errors_proto_rawDescGZIP() []byte {
	file_kentik_core_v202012alpha1_errors_proto_rawDescOnce.Do(func() {
		file_kentik_core_v202012alpha1_errors_proto_rawDescData = protoimpl.X.CompressGZIP(file_kentik_core_v202012alpha1_errors_proto_rawDescData)
	})
	return file_kentik_core_v202012alpha1_errors_proto_rawDescData
}

var file_kentik_core_v202012alpha1_errors_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_kentik_core_v202012alpha1_errors_proto_goTypes = []interface{}{
	(*ErrorInfo)(nil),             // 0: kentik.core.v202012alpha1.ErrorInfo
	(*timestamppb.Timestamp)(nil), // 1: google.protobuf.Timestamp
}
var file_kentik_core_v202012alpha1_errors_proto_depIdxs = []int32{
	1, // 0: kentik.core.v202012alpha1.ErrorInfo.timestamp:type_name -> google.protobuf.Timestamp
	1, // [1:1] is the sub-list for method output_type
	1, // [1:1] is the sub-list for method input_type
	1, // [1:1] is the sub-list for extension type_name
	1, // [1:1] is the sub-list for extension extendee
	0, // [0:1] is the sub-list for field type_name
}

func init() { file_kentik_core_v202012alpha1_errors_proto_init() }
func file_kentik_core_v202012alpha1_errors_proto_init() {
	if File_kentik_core_v202012alpha1_errors_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_kentik_core_v202012alpha1_errors_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ErrorInfo); i {
			case 0:
				return &v.state
			case 1:
				return &v.sizeCache
			case 2:
				return &v.unknownFields
			default:
				return nil
			}
		}
	}
	type x struct{}
	out := protoimpl.TypeBuilder{
		File: protoimpl.DescBuilder{
			GoPackagePath: reflect.TypeOf(x{}).PkgPath(),
			RawDescriptor: file_kentik_core_v202012alpha1_errors_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_kentik_core_v202012alpha1_errors_proto_goTypes,
		DependencyIndexes: file_kentik_core_v202012alpha1_errors_proto_depIdxs,
		MessageInfos:      file_kentik_core_v202012alpha1_errors_proto_msgTypes,
	}.Build()
	File_kentik_core_v202012alpha1_errors_proto = out.File
	file_kentik_core_v202012alpha1_errors_proto_rawDesc = nil
	file_kentik_core_v202012alpha1_errors_proto_goTypes = nil
	file_kentik_core_v202012alpha1_errors_proto_depIdxs = nil
}
