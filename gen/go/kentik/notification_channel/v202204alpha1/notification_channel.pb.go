// Code generated by protoc-gen-go. DO NOT EDIT.
// versions:
// 	protoc-gen-go v1.25.0
// 	protoc        (unknown)
// source: kentik/notification_channel/v202204alpha1/notification_channel.proto

package notification_channel

import (
	proto "github.com/golang/protobuf/proto"
	_ "github.com/grpc-ecosystem/grpc-gateway/v2/protoc-gen-openapiv2/options"
	_ "github.com/kentik/api-schema-public/go/kentik/core/v202303"
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

type ChannelType int32

const (
	ChannelType_CHANNEL_TYPE_UNSPECIFIED    ChannelType = 0
	ChannelType_CHANNEL_TYPE_XMATTERS       ChannelType = 1
	ChannelType_CHANNEL_TYPE_SLACK          ChannelType = 2
	ChannelType_CHANNEL_TYPE_SERVICENOW     ChannelType = 3
	ChannelType_CHANNEL_TYPE_SYSLOG         ChannelType = 4
	ChannelType_CHANNEL_TYPE_OPSGENIE       ChannelType = 5
	ChannelType_CHANNEL_TYPE_CUSTOM_WEBHOOK ChannelType = 6
	ChannelType_CHANNEL_TYPE_SPLUNK         ChannelType = 7
	ChannelType_CHANNEL_TYPE_MSTEAMS        ChannelType = 8
	ChannelType_CHANNEL_TYPE_JSON           ChannelType = 9
	ChannelType_CHANNEL_TYPE_EMAIL          ChannelType = 10
	ChannelType_CHANNEL_TYPE_VICTOROPS      ChannelType = 11
	ChannelType_CHANNEL_TYPE_PAGERDUTY      ChannelType = 12
)

// Enum value maps for ChannelType.
var (
	ChannelType_name = map[int32]string{
		0:  "CHANNEL_TYPE_UNSPECIFIED",
		1:  "CHANNEL_TYPE_XMATTERS",
		2:  "CHANNEL_TYPE_SLACK",
		3:  "CHANNEL_TYPE_SERVICENOW",
		4:  "CHANNEL_TYPE_SYSLOG",
		5:  "CHANNEL_TYPE_OPSGENIE",
		6:  "CHANNEL_TYPE_CUSTOM_WEBHOOK",
		7:  "CHANNEL_TYPE_SPLUNK",
		8:  "CHANNEL_TYPE_MSTEAMS",
		9:  "CHANNEL_TYPE_JSON",
		10: "CHANNEL_TYPE_EMAIL",
		11: "CHANNEL_TYPE_VICTOROPS",
		12: "CHANNEL_TYPE_PAGERDUTY",
	}
	ChannelType_value = map[string]int32{
		"CHANNEL_TYPE_UNSPECIFIED":    0,
		"CHANNEL_TYPE_XMATTERS":       1,
		"CHANNEL_TYPE_SLACK":          2,
		"CHANNEL_TYPE_SERVICENOW":     3,
		"CHANNEL_TYPE_SYSLOG":         4,
		"CHANNEL_TYPE_OPSGENIE":       5,
		"CHANNEL_TYPE_CUSTOM_WEBHOOK": 6,
		"CHANNEL_TYPE_SPLUNK":         7,
		"CHANNEL_TYPE_MSTEAMS":        8,
		"CHANNEL_TYPE_JSON":           9,
		"CHANNEL_TYPE_EMAIL":          10,
		"CHANNEL_TYPE_VICTOROPS":      11,
		"CHANNEL_TYPE_PAGERDUTY":      12,
	}
)

func (x ChannelType) Enum() *ChannelType {
	p := new(ChannelType)
	*p = x
	return p
}

func (x ChannelType) String() string {
	return protoimpl.X.EnumStringOf(x.Descriptor(), protoreflect.EnumNumber(x))
}

func (ChannelType) Descriptor() protoreflect.EnumDescriptor {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_enumTypes[0].Descriptor()
}

func (ChannelType) Type() protoreflect.EnumType {
	return &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_enumTypes[0]
}

func (x ChannelType) Number() protoreflect.EnumNumber {
	return protoreflect.EnumNumber(x)
}

// Deprecated: Use ChannelType.Descriptor instead.
func (ChannelType) EnumDescriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{0}
}

type NotificationChannel struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id     string      `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
	Name   string      `protobuf:"bytes,2,opt,name=name,proto3" json:"name,omitempty"`
	Type   ChannelType `protobuf:"varint,3,opt,name=type,proto3,enum=kentik.notification_channel.v202204alpha1.ChannelType" json:"type,omitempty"`
	Status string      `protobuf:"bytes,4,opt,name=status,proto3" json:"status,omitempty"`
	// Create timestamp.
	Cdate *timestamppb.Timestamp `protobuf:"bytes,5,opt,name=cdate,proto3" json:"cdate,omitempty"`
	// Update timestamp.
	Edate *timestamppb.Timestamp `protobuf:"bytes,6,opt,name=edate,proto3" json:"edate,omitempty"`
}

func (x *NotificationChannel) Reset() {
	*x = NotificationChannel{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[0]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *NotificationChannel) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*NotificationChannel) ProtoMessage() {}

func (x *NotificationChannel) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[0]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use NotificationChannel.ProtoReflect.Descriptor instead.
func (*NotificationChannel) Descriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{0}
}

func (x *NotificationChannel) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

func (x *NotificationChannel) GetName() string {
	if x != nil {
		return x.Name
	}
	return ""
}

func (x *NotificationChannel) GetType() ChannelType {
	if x != nil {
		return x.Type
	}
	return ChannelType_CHANNEL_TYPE_UNSPECIFIED
}

func (x *NotificationChannel) GetStatus() string {
	if x != nil {
		return x.Status
	}
	return ""
}

func (x *NotificationChannel) GetCdate() *timestamppb.Timestamp {
	if x != nil {
		return x.Cdate
	}
	return nil
}

func (x *NotificationChannel) GetEdate() *timestamppb.Timestamp {
	if x != nil {
		return x.Edate
	}
	return nil
}

type ListNotificationChannelsRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields
}

func (x *ListNotificationChannelsRequest) Reset() {
	*x = ListNotificationChannelsRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[1]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ListNotificationChannelsRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ListNotificationChannelsRequest) ProtoMessage() {}

func (x *ListNotificationChannelsRequest) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[1]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ListNotificationChannelsRequest.ProtoReflect.Descriptor instead.
func (*ListNotificationChannelsRequest) Descriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{1}
}

type ListNotificationChannelsResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	NotificationChannels []*NotificationChannel `protobuf:"bytes,1,rep,name=notification_channels,json=notificationChannels,proto3" json:"notification_channels,omitempty"`
	InvalidCount         int32                  `protobuf:"varint,2,opt,name=invalid_count,json=invalidCount,proto3" json:"invalid_count,omitempty"`
}

func (x *ListNotificationChannelsResponse) Reset() {
	*x = ListNotificationChannelsResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[2]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *ListNotificationChannelsResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*ListNotificationChannelsResponse) ProtoMessage() {}

func (x *ListNotificationChannelsResponse) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[2]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use ListNotificationChannelsResponse.ProtoReflect.Descriptor instead.
func (*ListNotificationChannelsResponse) Descriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{2}
}

func (x *ListNotificationChannelsResponse) GetNotificationChannels() []*NotificationChannel {
	if x != nil {
		return x.NotificationChannels
	}
	return nil
}

func (x *ListNotificationChannelsResponse) GetInvalidCount() int32 {
	if x != nil {
		return x.InvalidCount
	}
	return 0
}

type GetNotificationChannelRequest struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	Id string `protobuf:"bytes,1,opt,name=id,proto3" json:"id,omitempty"`
}

func (x *GetNotificationChannelRequest) Reset() {
	*x = GetNotificationChannelRequest{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[3]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetNotificationChannelRequest) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetNotificationChannelRequest) ProtoMessage() {}

func (x *GetNotificationChannelRequest) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[3]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetNotificationChannelRequest.ProtoReflect.Descriptor instead.
func (*GetNotificationChannelRequest) Descriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{3}
}

func (x *GetNotificationChannelRequest) GetId() string {
	if x != nil {
		return x.Id
	}
	return ""
}

type GetNotificationChannelResponse struct {
	state         protoimpl.MessageState
	sizeCache     protoimpl.SizeCache
	unknownFields protoimpl.UnknownFields

	NotificationChannel *NotificationChannel `protobuf:"bytes,1,opt,name=notification_channel,json=notificationChannel,proto3" json:"notification_channel,omitempty"`
}

func (x *GetNotificationChannelResponse) Reset() {
	*x = GetNotificationChannelResponse{}
	if protoimpl.UnsafeEnabled {
		mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[4]
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		ms.StoreMessageInfo(mi)
	}
}

func (x *GetNotificationChannelResponse) String() string {
	return protoimpl.X.MessageStringOf(x)
}

func (*GetNotificationChannelResponse) ProtoMessage() {}

func (x *GetNotificationChannelResponse) ProtoReflect() protoreflect.Message {
	mi := &file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[4]
	if protoimpl.UnsafeEnabled && x != nil {
		ms := protoimpl.X.MessageStateOf(protoimpl.Pointer(x))
		if ms.LoadMessageInfo() == nil {
			ms.StoreMessageInfo(mi)
		}
		return ms
	}
	return mi.MessageOf(x)
}

// Deprecated: Use GetNotificationChannelResponse.ProtoReflect.Descriptor instead.
func (*GetNotificationChannelResponse) Descriptor() ([]byte, []int) {
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP(), []int{4}
}

func (x *GetNotificationChannelResponse) GetNotificationChannel() *NotificationChannel {
	if x != nil {
		return x.NotificationChannel
	}
	return nil
}

var File_kentik_notification_channel_v202204alpha1_notification_channel_proto protoreflect.FileDescriptor

var file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDesc = []byte{
	0x0a, 0x44, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2f, 0x76, 0x32,
	0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2f, 0x6e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x12, 0x29, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x6e,
	0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e,
	0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61,
	0x31, 0x1a, 0x1c, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x61, 0x6e,
	0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a,
	0x17, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x61, 0x70, 0x69, 0x2f, 0x63, 0x6c, 0x69, 0x65,
	0x6e, 0x74, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x63,
	0x2d, 0x67, 0x65, 0x6e, 0x2d, 0x6f, 0x70, 0x65, 0x6e, 0x61, 0x70, 0x69, 0x76, 0x32, 0x2f, 0x6f,
	0x70, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2f, 0x61, 0x6e, 0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f,
	0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a, 0x25, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b,
	0x2f, 0x63, 0x6f, 0x72, 0x65, 0x2f, 0x76, 0x32, 0x30, 0x32, 0x33, 0x30, 0x33, 0x2f, 0x61, 0x6e,
	0x6e, 0x6f, 0x74, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x73, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x1a,
	0x1f, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2f, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75, 0x66,
	0x2f, 0x74, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x22, 0x81, 0x02, 0x0a, 0x13, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f,
	0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01,
	0x20, 0x01, 0x28, 0x09, 0x52, 0x02, 0x69, 0x64, 0x12, 0x12, 0x0a, 0x04, 0x6e, 0x61, 0x6d, 0x65,
	0x18, 0x02, 0x20, 0x01, 0x28, 0x09, 0x52, 0x04, 0x6e, 0x61, 0x6d, 0x65, 0x12, 0x4a, 0x0a, 0x04,
	0x74, 0x79, 0x70, 0x65, 0x18, 0x03, 0x20, 0x01, 0x28, 0x0e, 0x32, 0x36, 0x2e, 0x6b, 0x65, 0x6e,
	0x74, 0x69, 0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e,
	0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34,
	0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x54, 0x79,
	0x70, 0x65, 0x52, 0x04, 0x74, 0x79, 0x70, 0x65, 0x12, 0x16, 0x0a, 0x06, 0x73, 0x74, 0x61, 0x74,
	0x75, 0x73, 0x18, 0x04, 0x20, 0x01, 0x28, 0x09, 0x52, 0x06, 0x73, 0x74, 0x61, 0x74, 0x75, 0x73,
	0x12, 0x30, 0x0a, 0x05, 0x63, 0x64, 0x61, 0x74, 0x65, 0x18, 0x05, 0x20, 0x01, 0x28, 0x0b, 0x32,
	0x1a, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x62, 0x75,
	0x66, 0x2e, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x52, 0x05, 0x63, 0x64, 0x61,
	0x74, 0x65, 0x12, 0x30, 0x0a, 0x05, 0x65, 0x64, 0x61, 0x74, 0x65, 0x18, 0x06, 0x20, 0x01, 0x28,
	0x0b, 0x32, 0x1a, 0x2e, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0x2e, 0x70, 0x72, 0x6f, 0x74, 0x6f,
	0x62, 0x75, 0x66, 0x2e, 0x54, 0x69, 0x6d, 0x65, 0x73, 0x74, 0x61, 0x6d, 0x70, 0x52, 0x05, 0x65,
	0x64, 0x61, 0x74, 0x65, 0x22, 0x21, 0x0a, 0x1f, 0x4c, 0x69, 0x73, 0x74, 0x4e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73,
	0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x22, 0xbc, 0x01, 0x0a, 0x20, 0x4c, 0x69, 0x73, 0x74,
	0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e,
	0x6e, 0x65, 0x6c, 0x73, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x73, 0x0a, 0x15,
	0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61,
	0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x18, 0x01, 0x20, 0x03, 0x28, 0x0b, 0x32, 0x3e, 0x2e, 0x6b, 0x65,
	0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f,
	0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30,
	0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2e, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61,
	0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x52, 0x14, 0x6e, 0x6f, 0x74,
	0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x73, 0x12, 0x23, 0x0a, 0x0d, 0x69, 0x6e, 0x76, 0x61, 0x6c, 0x69, 0x64, 0x5f, 0x63, 0x6f, 0x75,
	0x6e, 0x74, 0x18, 0x02, 0x20, 0x01, 0x28, 0x05, 0x52, 0x0c, 0x69, 0x6e, 0x76, 0x61, 0x6c, 0x69,
	0x64, 0x43, 0x6f, 0x75, 0x6e, 0x74, 0x22, 0x2f, 0x0a, 0x1d, 0x47, 0x65, 0x74, 0x4e, 0x6f, 0x74,
	0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x12, 0x0e, 0x0a, 0x02, 0x69, 0x64, 0x18, 0x01, 0x20,
	0x01, 0x28, 0x09, 0x52, 0x02, 0x69, 0x64, 0x22, 0x93, 0x01, 0x0a, 0x1e, 0x47, 0x65, 0x74, 0x4e,
	0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e,
	0x65, 0x6c, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x12, 0x71, 0x0a, 0x14, 0x6e, 0x6f,
	0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e,
	0x65, 0x6c, 0x18, 0x01, 0x20, 0x01, 0x28, 0x0b, 0x32, 0x3e, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69,
	0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c,
	0x70, 0x68, 0x61, 0x31, 0x2e, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f,
	0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x52, 0x13, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2a, 0xea, 0x02,
	0x0a, 0x0b, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x54, 0x79, 0x70, 0x65, 0x12, 0x1c, 0x0a,
	0x18, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x55, 0x4e,
	0x53, 0x50, 0x45, 0x43, 0x49, 0x46, 0x49, 0x45, 0x44, 0x10, 0x00, 0x12, 0x19, 0x0a, 0x15, 0x43,
	0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x58, 0x4d, 0x41, 0x54,
	0x54, 0x45, 0x52, 0x53, 0x10, 0x01, 0x12, 0x16, 0x0a, 0x12, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45,
	0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x53, 0x4c, 0x41, 0x43, 0x4b, 0x10, 0x02, 0x12, 0x1b,
	0x0a, 0x17, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x53,
	0x45, 0x52, 0x56, 0x49, 0x43, 0x45, 0x4e, 0x4f, 0x57, 0x10, 0x03, 0x12, 0x17, 0x0a, 0x13, 0x43,
	0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x53, 0x59, 0x53, 0x4c,
	0x4f, 0x47, 0x10, 0x04, 0x12, 0x19, 0x0a, 0x15, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f,
	0x54, 0x59, 0x50, 0x45, 0x5f, 0x4f, 0x50, 0x53, 0x47, 0x45, 0x4e, 0x49, 0x45, 0x10, 0x05, 0x12,
	0x1f, 0x0a, 0x1b, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f,
	0x43, 0x55, 0x53, 0x54, 0x4f, 0x4d, 0x5f, 0x57, 0x45, 0x42, 0x48, 0x4f, 0x4f, 0x4b, 0x10, 0x06,
	0x12, 0x17, 0x0a, 0x13, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45,
	0x5f, 0x53, 0x50, 0x4c, 0x55, 0x4e, 0x4b, 0x10, 0x07, 0x12, 0x18, 0x0a, 0x14, 0x43, 0x48, 0x41,
	0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x4d, 0x53, 0x54, 0x45, 0x41, 0x4d,
	0x53, 0x10, 0x08, 0x12, 0x15, 0x0a, 0x11, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54,
	0x59, 0x50, 0x45, 0x5f, 0x4a, 0x53, 0x4f, 0x4e, 0x10, 0x09, 0x12, 0x16, 0x0a, 0x12, 0x43, 0x48,
	0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x45, 0x4d, 0x41, 0x49, 0x4c,
	0x10, 0x0a, 0x12, 0x1a, 0x0a, 0x16, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59,
	0x50, 0x45, 0x5f, 0x56, 0x49, 0x43, 0x54, 0x4f, 0x52, 0x4f, 0x50, 0x53, 0x10, 0x0b, 0x12, 0x1a,
	0x0a, 0x16, 0x43, 0x48, 0x41, 0x4e, 0x4e, 0x45, 0x4c, 0x5f, 0x54, 0x59, 0x50, 0x45, 0x5f, 0x50,
	0x41, 0x47, 0x45, 0x52, 0x44, 0x55, 0x54, 0x59, 0x10, 0x0c, 0x32, 0x97, 0x07, 0x0a, 0x1a, 0x4e,
	0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e,
	0x65, 0x6c, 0x53, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x12, 0x98, 0x03, 0x0a, 0x18, 0x4c, 0x69,
	0x73, 0x74, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68,
	0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x12, 0x4a, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e,
	0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61,
	0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68,
	0x61, 0x31, 0x2e, 0x4c, 0x69, 0x73, 0x74, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x52, 0x65, 0x71, 0x75, 0x65,
	0x73, 0x74, 0x1a, 0x4b, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2e, 0x4c,
	0x69, 0x73, 0x74, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x52, 0x65, 0x73, 0x70, 0x6f, 0x6e, 0x73, 0x65, 0x22,
	0xe2, 0x01, 0x92, 0x41, 0x7b, 0x12, 0x21, 0x46, 0x65, 0x74, 0x63, 0x68, 0x20, 0x53, 0x65, 0x61,
	0x72, 0x63, 0x68, 0x20, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e,
	0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x1a, 0x3c, 0x52, 0x65, 0x74, 0x75, 0x72, 0x6e,
	0x20, 0x6c, 0x69, 0x73, 0x74, 0x20, 0x6f, 0x66, 0x20, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x20, 0x6d,
	0x61, 0x74, 0x63, 0x68, 0x65, 0x73, 0x20, 0x73, 0x65, 0x61, 0x72, 0x63, 0x68, 0x20, 0x63, 0x72,
	0x69, 0x74, 0x65, 0x72, 0x61, 0x2e, 0x2a, 0x18, 0x4c, 0x69, 0x73, 0x74, 0x4e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x73,
	0xf2, 0xd7, 0x02, 0x1f, 0x61, 0x64, 0x6d, 0x69, 0x6e, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x3a, 0x72,
	0x65, 0x61, 0x64, 0x82, 0xd3, 0xe4, 0x93, 0x02, 0x3b, 0x12, 0x39, 0x2f, 0x6e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x2f, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2f, 0x6e,
	0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e,
	0x6e, 0x65, 0x6c, 0x73, 0x12, 0xa3, 0x03, 0x0a, 0x16, 0x47, 0x65, 0x74, 0x4e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x12,
	0x48, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32,
	0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2e, 0x47, 0x65, 0x74, 0x4e,
	0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e,
	0x65, 0x6c, 0x52, 0x65, 0x71, 0x75, 0x65, 0x73, 0x74, 0x1a, 0x49, 0x2e, 0x6b, 0x65, 0x6e, 0x74,
	0x69, 0x6b, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f,
	0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2e, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61,
	0x6c, 0x70, 0x68, 0x61, 0x31, 0x2e, 0x47, 0x65, 0x74, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x52, 0x65, 0x73, 0x70,
	0x6f, 0x6e, 0x73, 0x65, 0x22, 0xf3, 0x01, 0x92, 0x41, 0x86, 0x01, 0x12, 0x29, 0x47, 0x65, 0x74,
	0x20, 0x69, 0x6e, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x61, 0x62, 0x6f,
	0x75, 0x74, 0x20, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x1a, 0x41, 0x52, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x73, 0x20,
	0x69, 0x6e, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20, 0x61, 0x62, 0x6f, 0x75,
	0x74, 0x20, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63,
	0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x20, 0x73, 0x70, 0x65, 0x63, 0x69, 0x66, 0x69, 0x65, 0x64,
	0x20, 0x77, 0x69, 0x74, 0x68, 0x20, 0x49, 0x44, 0x2e, 0x2a, 0x16, 0x47, 0x65, 0x74, 0x4e, 0x6f,
	0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65,
	0x6c, 0xf2, 0xd7, 0x02, 0x1f, 0x61, 0x64, 0x6d, 0x69, 0x6e, 0x2e, 0x6e, 0x6f, 0x74, 0x69, 0x66,
	0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x3a,
	0x72, 0x65, 0x61, 0x64, 0x82, 0xd3, 0xe4, 0x93, 0x02, 0x40, 0x12, 0x3e, 0x2f, 0x6e, 0x6f, 0x74,
	0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65,
	0x6c, 0x2f, 0x76, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x2f,
	0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61,
	0x6e, 0x6e, 0x65, 0x6c, 0x73, 0x2f, 0x7b, 0x69, 0x64, 0x7d, 0x1a, 0x38, 0xca, 0x41, 0x13, 0x67,
	0x72, 0x70, 0x63, 0x2e, 0x61, 0x70, 0x69, 0x2e, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x63,
	0x6f, 0x6d, 0xea, 0xd7, 0x02, 0x1a, 0x61, 0x64, 0x6d, 0x69, 0x6e, 0x2e, 0x6e, 0x6f, 0x74, 0x69,
	0x66, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c,
	0x90, 0xd8, 0x02, 0x03, 0x42, 0xe0, 0x03, 0x5a, 0x65, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x2e,
	0x63, 0x6f, 0x6d, 0x2f, 0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x61, 0x70, 0x69, 0x2d, 0x73,
	0x63, 0x68, 0x65, 0x6d, 0x61, 0x2d, 0x70, 0x75, 0x62, 0x6c, 0x69, 0x63, 0x2f, 0x67, 0x6f, 0x2f,
	0x6b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x2f, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x2f, 0x76, 0x32, 0x30, 0x32,
	0x32, 0x30, 0x34, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x31, 0x3b, 0x6e, 0x6f, 0x74, 0x69, 0x66, 0x69,
	0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x5f, 0x63, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x92, 0x41,
	0xf5, 0x02, 0x12, 0x8e, 0x01, 0x0a, 0x17, 0x4e, 0x6f, 0x74, 0x69, 0x66, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x43, 0x68, 0x61, 0x6e, 0x6e, 0x65, 0x6c, 0x20, 0x41, 0x50, 0x49, 0x12, 0x4b,
	0x2d, 0x2d, 0x2d, 0x20, 0x54, 0x68, 0x69, 0x73, 0x20, 0x41, 0x50, 0x49, 0x20, 0x68, 0x61, 0x73,
	0x20, 0x62, 0x65, 0x65, 0x6e, 0x20, 0x64, 0x65, 0x70, 0x72, 0x65, 0x63, 0x61, 0x74, 0x65, 0x64,
	0x20, 0x61, 0x6e, 0x64, 0x20, 0x77, 0x69, 0x6c, 0x6c, 0x20, 0x62, 0x65, 0x20, 0x72, 0x65, 0x6d,
	0x6f, 0x76, 0x65, 0x64, 0x20, 0x69, 0x6e, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6e, 0x65, 0x61, 0x72,
	0x20, 0x66, 0x75, 0x74, 0x75, 0x72, 0x65, 0x20, 0x2d, 0x2d, 0x2d, 0x22, 0x18, 0x0a, 0x16, 0x4b,
	0x65, 0x6e, 0x74, 0x69, 0x6b, 0x20, 0x41, 0x50, 0x49, 0x20, 0x45, 0x6e, 0x67, 0x69, 0x6e, 0x65,
	0x65, 0x72, 0x69, 0x6e, 0x67, 0x32, 0x0c, 0x32, 0x30, 0x32, 0x32, 0x30, 0x34, 0x61, 0x6c, 0x70,
	0x68, 0x61, 0x31, 0x2a, 0x01, 0x02, 0x32, 0x10, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63, 0x61, 0x74,
	0x69, 0x6f, 0x6e, 0x2f, 0x6a, 0x73, 0x6f, 0x6e, 0x3a, 0x10, 0x61, 0x70, 0x70, 0x6c, 0x69, 0x63,
	0x61, 0x74, 0x69, 0x6f, 0x6e, 0x2f, 0x6a, 0x73, 0x6f, 0x6e, 0x5a, 0x44, 0x0a, 0x1e, 0x0a, 0x05,
	0x65, 0x6d, 0x61, 0x69, 0x6c, 0x12, 0x15, 0x08, 0x02, 0x1a, 0x0f, 0x58, 0x2d, 0x43, 0x48, 0x2d,
	0x41, 0x75, 0x74, 0x68, 0x2d, 0x45, 0x6d, 0x61, 0x69, 0x6c, 0x20, 0x02, 0x0a, 0x22, 0x0a, 0x05,
	0x74, 0x6f, 0x6b, 0x65, 0x6e, 0x12, 0x19, 0x08, 0x02, 0x1a, 0x13, 0x58, 0x2d, 0x43, 0x48, 0x2d,
	0x41, 0x75, 0x74, 0x68, 0x2d, 0x41, 0x50, 0x49, 0x2d, 0x54, 0x6f, 0x6b, 0x65, 0x6e, 0x20, 0x02,
	0x62, 0x16, 0x0a, 0x09, 0x0a, 0x05, 0x65, 0x6d, 0x61, 0x69, 0x6c, 0x12, 0x00, 0x0a, 0x09, 0x0a,
	0x05, 0x74, 0x6f, 0x6b, 0x65, 0x6e, 0x12, 0x00, 0x72, 0x5d, 0x0a, 0x25, 0x47, 0x65, 0x6e, 0x65,
	0x72, 0x61, 0x6c, 0x20, 0x69, 0x6e, 0x66, 0x6f, 0x72, 0x6d, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x20,
	0x61, 0x62, 0x6f, 0x75, 0x74, 0x20, 0x4b, 0x65, 0x6e, 0x74, 0x69, 0x6b, 0x20, 0x41, 0x50, 0x49,
	0x73, 0x12, 0x34, 0x68, 0x74, 0x74, 0x70, 0x73, 0x3a, 0x2f, 0x2f, 0x6b, 0x62, 0x2e, 0x6b, 0x65,
	0x6e, 0x74, 0x69, 0x6b, 0x2e, 0x63, 0x6f, 0x6d, 0x2f, 0x76, 0x30, 0x2f, 0x41, 0x62, 0x30, 0x39,
	0x2e, 0x68, 0x74, 0x6d, 0x23, 0x41, 0x62, 0x30, 0x39, 0x2d, 0x41, 0x50, 0x49, 0x73, 0x5f, 0x4f,
	0x76, 0x65, 0x72, 0x76, 0x69, 0x65, 0x77, 0x62, 0x06, 0x70, 0x72, 0x6f, 0x74, 0x6f, 0x33,
}

var (
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescOnce sync.Once
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescData = file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDesc
)

func file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescGZIP() []byte {
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescOnce.Do(func() {
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescData = protoimpl.X.CompressGZIP(file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescData)
	})
	return file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDescData
}

var file_kentik_notification_channel_v202204alpha1_notification_channel_proto_enumTypes = make([]protoimpl.EnumInfo, 1)
var file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes = make([]protoimpl.MessageInfo, 5)
var file_kentik_notification_channel_v202204alpha1_notification_channel_proto_goTypes = []interface{}{
	(ChannelType)(0),                         // 0: kentik.notification_channel.v202204alpha1.ChannelType
	(*NotificationChannel)(nil),              // 1: kentik.notification_channel.v202204alpha1.NotificationChannel
	(*ListNotificationChannelsRequest)(nil),  // 2: kentik.notification_channel.v202204alpha1.ListNotificationChannelsRequest
	(*ListNotificationChannelsResponse)(nil), // 3: kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse
	(*GetNotificationChannelRequest)(nil),    // 4: kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest
	(*GetNotificationChannelResponse)(nil),   // 5: kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse
	(*timestamppb.Timestamp)(nil),            // 6: google.protobuf.Timestamp
}
var file_kentik_notification_channel_v202204alpha1_notification_channel_proto_depIdxs = []int32{
	0, // 0: kentik.notification_channel.v202204alpha1.NotificationChannel.type:type_name -> kentik.notification_channel.v202204alpha1.ChannelType
	6, // 1: kentik.notification_channel.v202204alpha1.NotificationChannel.cdate:type_name -> google.protobuf.Timestamp
	6, // 2: kentik.notification_channel.v202204alpha1.NotificationChannel.edate:type_name -> google.protobuf.Timestamp
	1, // 3: kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse.notification_channels:type_name -> kentik.notification_channel.v202204alpha1.NotificationChannel
	1, // 4: kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse.notification_channel:type_name -> kentik.notification_channel.v202204alpha1.NotificationChannel
	2, // 5: kentik.notification_channel.v202204alpha1.NotificationChannelService.ListNotificationChannels:input_type -> kentik.notification_channel.v202204alpha1.ListNotificationChannelsRequest
	4, // 6: kentik.notification_channel.v202204alpha1.NotificationChannelService.GetNotificationChannel:input_type -> kentik.notification_channel.v202204alpha1.GetNotificationChannelRequest
	3, // 7: kentik.notification_channel.v202204alpha1.NotificationChannelService.ListNotificationChannels:output_type -> kentik.notification_channel.v202204alpha1.ListNotificationChannelsResponse
	5, // 8: kentik.notification_channel.v202204alpha1.NotificationChannelService.GetNotificationChannel:output_type -> kentik.notification_channel.v202204alpha1.GetNotificationChannelResponse
	7, // [7:9] is the sub-list for method output_type
	5, // [5:7] is the sub-list for method input_type
	5, // [5:5] is the sub-list for extension type_name
	5, // [5:5] is the sub-list for extension extendee
	0, // [0:5] is the sub-list for field type_name
}

func init() { file_kentik_notification_channel_v202204alpha1_notification_channel_proto_init() }
func file_kentik_notification_channel_v202204alpha1_notification_channel_proto_init() {
	if File_kentik_notification_channel_v202204alpha1_notification_channel_proto != nil {
		return
	}
	if !protoimpl.UnsafeEnabled {
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[0].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*NotificationChannel); i {
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
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[1].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ListNotificationChannelsRequest); i {
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
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[2].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*ListNotificationChannelsResponse); i {
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
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[3].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetNotificationChannelRequest); i {
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
		file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes[4].Exporter = func(v interface{}, i int) interface{} {
			switch v := v.(*GetNotificationChannelResponse); i {
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
			RawDescriptor: file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDesc,
			NumEnums:      1,
			NumMessages:   5,
			NumExtensions: 0,
			NumServices:   1,
		},
		GoTypes:           file_kentik_notification_channel_v202204alpha1_notification_channel_proto_goTypes,
		DependencyIndexes: file_kentik_notification_channel_v202204alpha1_notification_channel_proto_depIdxs,
		EnumInfos:         file_kentik_notification_channel_v202204alpha1_notification_channel_proto_enumTypes,
		MessageInfos:      file_kentik_notification_channel_v202204alpha1_notification_channel_proto_msgTypes,
	}.Build()
	File_kentik_notification_channel_v202204alpha1_notification_channel_proto = out.File
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_rawDesc = nil
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_goTypes = nil
	file_kentik_notification_channel_v202204alpha1_notification_channel_proto_depIdxs = nil
}
