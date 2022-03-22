// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0
// 	protoc        (unknown)
// source: kentik/notify/backend/v0/models-channel-event.proto

package notify

import (
	proto "github.com/golang/protobuf/proto"
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

type ChannelVersion int32

const (
	ChannelVersion_channelVersionUnknown ChannelVersion = 0
	ChannelVersion_channelVersion1       ChannelVersion = 1 // channels defined in ch_www.mn_alert_notification_channel
	ChannelVersion_channelVersion2       ChannelVersion = 2 // channels defined and owned by "notify"
)

// Enum value maps for ChannelVersion.
var (
	ChannelVersion_name = map[int32]string{
		0: "channelVersionUnknown",
		1: "channelVersion1",
		2: "channelVersion2",
	}
	ChannelVersion_value = map[string]int32{
		"channelVersionUnknown": 0,
		"channelVersion1":       1,
		"channelVersion2":       2,
	}
)

func (x ChannelVersion) Enum() *ChannelVersion {
	p := new(ChannelVersion)
	*p = x
	return p
}

func (x ChannelVersion) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (ChannelVersion) Descriptor() protoreflect.EnumDescriptor {
	return file_kentik_notify_backend_v0_models_channel_event_proto_enumTypes[0].Descriptor()
}

func (ChannelVersion) Type() protoreflect.EnumType {
	return &file_kentik_notify_backend_v0_models_channel_event_proto_enumTypes[0]
}

func (x ChannelVersion) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use ChannelVersion.Descriptor instead.
func (ChannelVersion) EnumDescriptor() ([]byte, []int) {
	return file_kentik_notify_backend_v0_models_channel_event_proto_rawDescGZIP(), []int{0}
}

type ChannelEvent struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	ChannelID      int64          `protobuf:"varint,1,opt,name=channelID,proto3" json:"channelID,omitempty"`
	ChannelVersion ChannelVersion `protobuf:"varint,2,opt,name=channelVersion,proto3,enum=kentik.api.notify.v0.ChannelVersion" json:"channelVersion,omitempty"`
	// eventTimestamp is when the NotificationEvent was ingested by kafka.
	// i.e. the ConsumerMessage.Timestamp when read.
	EventTimestamp *timestamppb.Timestamp `protobuf:"bytes,3,opt,name=eventTimestamp,proto3" json:"eventTimestamp,omitempty"`
	Event          *NotificationEvent     `protobuf:"bytes,4,opt,name=event,proto3" json:"event,omitempty"`
}

func (x *ChannelEvent) Reset() {
	*x = ChannelEvent{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notify_backend_v0_models_channel_event_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ChannelEvent) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ChannelEvent) ProtoMessage() {}

func (x *ChannelEvent) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notify_backend_v0_models_channel_event_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ChannelEvent.ProtoReflect.Descriptor instead.
func (*ChannelEvent) Descriptor() ([]byte, []int) {
	return file_kentik_notify_backend_v0_models_channel_event_proto_rawDescGZIP(), []int{0}
}

func (x *ChannelEvent) GetChannelID() int64 {
	if x != nil {
		return x.ChannelID
	}
	return 0
}

func (x *ChannelEvent) GetChannelVersion() ChannelVersion {
	if x != nil {
		return x.ChannelVersion
	}
	return ChannelVersion_channelVersionUnknown
}

func (x *ChannelEvent) GetEventTimestamp() *timestamppb.Timestamp {
	if x != nil {
		return x.EventTimestamp
	}
	return nil
}

func (x *ChannelEvent) GetEvent() *NotificationEvent {
	if x != nil {
		return x.Event
	}
	return nil
}

var File_kentik_notify_backend_v0_models_channel_event_proto protoreflect.FileDescriptor

var file_kentik_notify_backend_v0_models_channel_event_proto_rawDesc = []byte{
	0x0a, 0x33, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2f,
	0x62, 0x61, 0x63, 0x6b, 0x65, 0x6e, 0x64, 0x2f, 0x76, 0x30, 0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c,
	0x73, 0x2d, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2d, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x2e,
	0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x14, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x61, 0x70,
	0x69, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2e, 0x76, 0x30, 0x1a, 0x1f, 0x67, 0x6f, 0x6f,
	0x67, 0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66, 0x2f, 0x74, 0x69, 0x6d,
	0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x2b, 0x6b, 0x65,
	0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2f, 0x62, 0x61, 0x63, 0x6b,
	0x65, 0x6e, 0x64, 0x2f, 0x76, 0x30, 0x2f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x73, 0x2d, 0x65, 0x76,
	0x65, 0x6e, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x22, 0xfd, 0x01, 0x0a, 0x0c, 0x43, 0x68,
	0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x45, 0x76, 0x65, 0x6e, 0x74, 0x12, 0x1c, 0x0a, 0x09, 0x63, 0x68,
	0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x49, 0x44, 0x18, 0x01, 0x20, 0x01, 0x28, 0x03, 0x52, 0x09, 0x63,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x49, 0x44, 0x12, 0x4c, 0x0a, 0x0e, 0x63, 0x68, 0x61, 0x6e,
	0x6e, 0x65, 0x6c, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x18, 0x02, 0x20, 0x01, 0x28, 0x0e,
	0x32, 0x24, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x6e, 0x6f,
	0x74, 0x69, 0x66, 0x79, 0x2e, 0x76, 0x30, 0x2e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56,
	0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x52, 0x0e, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56,
	0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x12, 0x42, 0x0a, 0x0e, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x54,
	0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x1a,
	0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66,
	0x2e, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x52, 0x0e, 0x65, 0x76, 0x65, 0x6e,
	0x74, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x12, 0x3d, 0x0a, 0x05, 0x65, 0x76,
	0x65, 0x6e, 0x74, 0x18, 0x04, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x27, 0x2e, 0x6b, 0x65, 0x6e, 0x74,
	0x69, 0x6b, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x79, 0x2e, 0x76, 0x30,
	0x2e, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x45, 0x76, 0x65,
	0x6e, 0x74, 0x52, 0x05, 0x65, 0x76, 0x65, 0x6e, 0x74, 0x2a, 0x55, 0x0a, 0x0e, 0x43, 0x68, 0x61,
	0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x12, 0x19, 0x0a, 0x15, 0x63,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x55, 0x6e, 0x6b,
	0x6e, 0x6f, 0x77, 0x6e, 0x10, 0x00, 0x12, 0x13, 0x0a, 0x0f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
	0x6c, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x31, 0x10, 0x01, 0x12, 0x13, 0x0a, 0x0f, 0x63,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x56, 0x65, 0x72, 0x73, 0x69, 0x6f, 0x6e, 0x32, 0x10, 0x02,
	0x42, 0x21, 0x5a, 0x1f, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66,
	0x79, 0x2f, 0x62, 0x61, 0x63, 0x6b, 0x65, 0x6e, 0x64, 0x2f, 0x76, 0x30, 0x3b, 0x6e, 0x6f, 0x74,
	0x69, 0x66, 0x79, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_kentik_notify_backend_v0_models_channel_event_proto_rawDescOnce sync.Once
	file_kentik_notify_backend_v0_models_channel_event_proto_rawDescData = file_kentik_notify_backend_v0_models_channel_event_proto_rawDesc
)

func file_kentik_notify_backend_v0_models_channel_event_proto_rawDescGZIP() []byte {
	file_kentik_notify_backend_v0_models_channel_event_proto_rawDescOnce.Do(func() {
		file_kentik_notify_backend_v0_models_channel_event_proto_rawDescData = protoimpl.X.CompressGZIP(file_kentik_notify_backend_v0_models_channel_event_proto_rawDescData)
	})
	return file_kentik_notify_backend_v0_models_channel_event_proto_rawDescData
}

var file_kentik_notify_backend_v0_models_channel_event_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_kentik_notify_backend_v0_models_channel_event_proto_msgTypes = make([]protoimpl.MessageInfo, 1)
var file_kentik_notify_backend_v0_models_channel_event_proto_goTypes = []interface{}{
	(ChannelVersion)(0),           // 0: kentik.api.notify.v0.ChannelVersion
	(*ChannelEvent)(nil),          // 1: kentik.api.notify.v0.ChannelEvent
	(*timestamppb.Timestamp)(nil), // 2: google.protobuf.Timestamp
	(*NotificationEvent)(nil),     // 3: kentik.api.notify.v0.NotificationEvent
}
var file_kentik_notify_backend_v0_models_channel_event_proto_depIdxs = []int32{
	0, // 0: kentik.api.notify.v0.ChannelEvent.channelVersion:type_name -> kentik.api.notify.v0.ChannelVersion
	2, // 1: kentik.api.notify.v0.ChannelEvent.eventTimestamp:type_name -> google.protobuf.Timestamp
	3, // 2: kentik.api.notify.v0.ChannelEvent.event:type_name -> kentik.api.notify.v0.NotificationEvent
	3, // [3:3] is the sub-list for method output_type
	3, // [3:3] is the sub-list for method input_type
	3, // [3:3] is the sub-list for extension type_name
	3, // [3:3] is the sub-list for extension extendee
	0, // [0:3] is the sub-list for field type_name
}

func init() { file_kentik_notify_backend_v0_models_channel_event_proto_init() }
func file_kentik_notify_backend_v0_models_channel_event_proto_init() {
	if File_kentik_notify_backend_v0_models_channel_event_proto != nil {
		return
	}
	file_kentik_notify_backend_v0_models_event_proto_init()
	if !protoimpl.UnsafeEnabled {
		file_kentik_notify_backend_v0_models_channel_event_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ChannelEvent); i {
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
			RawDescriptor: file_kentik_notify_backend_v0_models_channel_event_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   1,
			NumExtensions: 0,
			NumServices:   0,
		},
		GoTypes:           file_kentik_notify_backend_v0_models_channel_event_proto_goTypes,
		DependencyIndexes: file_kentik_notify_backend_v0_models_channel_event_proto_depIdxs,
		EnumInfos:         file_kentik_notify_backend_v0_models_channel_event_proto_enumTypes,
		MessageInfos:      file_kentik_notify_backend_v0_models_channel_event_proto_msgTypes,
	}.Build()
	File_kentik_notify_backend_v0_models_channel_event_proto = out.File
	file_kentik_notify_backend_v0_models_channel_event_proto_rawDesc = nil
	file_kentik_notify_backend_v0_models_channel_event_proto_goTypes = nil
	file_kentik_notify_backend_v0_models_channel_event_proto_depIdxs = nil
}
