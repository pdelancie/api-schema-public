// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0
// 	protoc        (unknown)
// source: kentik/notify/backend/v0/models-notification-to-send.proto

package notify

import (
	proto "github.com/golang/protobuf/proto"
	protoreflect "google.golang.org/protobuf/reflect/protoreflect"
	protoimpl "google.golang.org/protobuf/runtime/protoimpl"
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

type NotificationToSend struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *NotificationToSend) Reset() {
	*x = NotificationToSend{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notify_backend_v0_models_notification_to_send_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *NotificationToSend) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*NotificationToSend) ProtoMessage() {}

func (x *NotificationToSend) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notify_backend_v0_models_notification_to_send_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use NotificationToSend.ProtoReflect.Descriptor instead.
func (*NotificationToSend) Descriptor() ([]byte, []int) {
	return file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescGZIP(), []int{0}
}

var File_kentik_notify_backend_v0_models_notification_to_send_proto protoreflect.FileDescriptor

var file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDesc = []byte{
	0x0a, 0x3a, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2f,
	0x62, 0x61, 0x63, 0x6b, 0x65, 0x6e, 0x64, 0x2f, 0x76, 0x30, 0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c,
	0x73, 0x2d, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2d, 0x74,
	0x6f, 0x2d, 0x73, 0x65, 0x6e, 0x64, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x14, 0x6b, 0x65,
	0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2e,
	0x76, 0x30, 0x22, 0x14, 0x0a, 0x12, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69,
	0x6f, 0x6e, 0x54, 0x6f, 0x53, 0x65, 0x6e, 0x64, 0x42, 0x21, 0x5a, 0x1f, 0x6b, 0x65, 0x6e, 0x74,
	0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2f, 0x62, 0x61, 0x63, 0x6b, 0x65, 0x6e,
	0x64, 0x2f, 0x76, 0x30, 0x3b, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x62, 0x06, 0x70, 0x72, 0x6f,
	0x74, 0x6f, 0x33,
}

var (
	file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescOnce sync.Once
	file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescData = file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDesc
)

func file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescGZIP() []byte {
	file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescOnce.Do(func() {
		file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescData = protoimpl.X.CompressGZIP(file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescData)
	})
	return file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDescData
}

var file_kentik_notify_backend_v0_models_notification_to_send_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_kentik_notify_backend_v0_models_notification_to_send_proto_goTypes = []interface{}{
	(*NotificationToSend)(nil), // 0: kentik.api.notify.v0.NotificationToSend
}
var file_kentik_notify_backend_v0_models_notification_to_send_proto_depIdxs = []int32{
	0, // [0:0] is the sub-list for method output_type
	0, // [0:0] is the sub-list for method input_type
	0, // [0:0] is the sub-list for extension type_name
	0, // [0:0] is the sub-list for extension extendee
	0, // [0:0] is the sub-list for field type_name
}

func init() { file_kentik_notify_backend_v0_models_notification_to_send_proto_init() }
func file_kentik_notify_backend_v0_models_notification_to_send_proto_init() {
	if File_kentik_notify_backend_v0_models_notification_to_send_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_kentik_notify_backend_v0_models_notification_to_send_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*NotificationToSend); i {
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
			RawDescriptor: file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDesc,
			NumEnums:      0,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_kentik_notify_backend_v0_models_notification_to_send_proto_goTypes,
		DependencyIndexes: file_kentik_notify_backend_v0_models_notification_to_send_proto_depIdxs,
		MessageInfos:      file_kentik_notify_backend_v0_models_notification_to_send_proto_msgTypes,
	}.Build()
	File_kentik_notify_backend_v0_models_notification_to_send_proto = out.File
	file_kentik_notify_backend_v0_models_notification_to_send_proto_rawDesc = nil
	file_kentik_notify_backend_v0_models_notification_to_send_proto_goTypes = nil
	file_kentik_notify_backend_v0_models_notification_to_send_proto_depIdxs = nil
}
