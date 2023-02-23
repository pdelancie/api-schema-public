# Generated by the Protocol Buffers compiler. DO NOT EDIT!
# source: kentik/label/v202210/label.proto
# plugin: grpclib.plugin.main
import abc
import typing

import grpclib.const
import grpclib.client
if typing.TYPE_CHECKING:
    import grpclib.server

import google.api.annotations_pb2
import google.api.field_behavior_pb2
import google.api.client_pb2
import protoc_gen_openapiv2.options.annotations_pb2
import kentik.core.v202012alpha1.annotations_pb2
import google.protobuf.timestamp_pb2
import kentik.label.v202210.label_pb2


class LabelServiceBase(abc.ABC):

    @abc.abstractmethod
    async def ListLabels(self, stream: 'grpclib.server.Stream[kentik.label.v202210.label_pb2.ListLabelsRequest, kentik.label.v202210.label_pb2.ListLabelsResponse]') -> None:
        pass

    @abc.abstractmethod
    async def CreateLabel(self, stream: 'grpclib.server.Stream[kentik.label.v202210.label_pb2.CreateLabelRequest, kentik.label.v202210.label_pb2.CreateLabelResponse]') -> None:
        pass

    @abc.abstractmethod
    async def UpdateLabel(self, stream: 'grpclib.server.Stream[kentik.label.v202210.label_pb2.UpdateLabelRequest, kentik.label.v202210.label_pb2.UpdateLabelResponse]') -> None:
        pass

    @abc.abstractmethod
    async def DeleteLabel(self, stream: 'grpclib.server.Stream[kentik.label.v202210.label_pb2.DeleteLabelRequest, kentik.label.v202210.label_pb2.DeleteLabelResponse]') -> None:
        pass

    def __mapping__(self) -> typing.Dict[str, grpclib.const.Handler]:
        return {
            '/kentik.label.v202210.LabelService/ListLabels': grpclib.const.Handler(
                self.ListLabels,
                grpclib.const.Cardinality.UNARY_UNARY,
                kentik.label.v202210.label_pb2.ListLabelsRequest,
                kentik.label.v202210.label_pb2.ListLabelsResponse,
            ),
            '/kentik.label.v202210.LabelService/CreateLabel': grpclib.const.Handler(
                self.CreateLabel,
                grpclib.const.Cardinality.UNARY_UNARY,
                kentik.label.v202210.label_pb2.CreateLabelRequest,
                kentik.label.v202210.label_pb2.CreateLabelResponse,
            ),
            '/kentik.label.v202210.LabelService/UpdateLabel': grpclib.const.Handler(
                self.UpdateLabel,
                grpclib.const.Cardinality.UNARY_UNARY,
                kentik.label.v202210.label_pb2.UpdateLabelRequest,
                kentik.label.v202210.label_pb2.UpdateLabelResponse,
            ),
            '/kentik.label.v202210.LabelService/DeleteLabel': grpclib.const.Handler(
                self.DeleteLabel,
                grpclib.const.Cardinality.UNARY_UNARY,
                kentik.label.v202210.label_pb2.DeleteLabelRequest,
                kentik.label.v202210.label_pb2.DeleteLabelResponse,
            ),
        }


class LabelServiceStub:

    def __init__(self, channel: grpclib.client.Channel) -> None:
        self.ListLabels = grpclib.client.UnaryUnaryMethod(
            channel,
            '/kentik.label.v202210.LabelService/ListLabels',
            kentik.label.v202210.label_pb2.ListLabelsRequest,
            kentik.label.v202210.label_pb2.ListLabelsResponse,
        )
        self.CreateLabel = grpclib.client.UnaryUnaryMethod(
            channel,
            '/kentik.label.v202210.LabelService/CreateLabel',
            kentik.label.v202210.label_pb2.CreateLabelRequest,
            kentik.label.v202210.label_pb2.CreateLabelResponse,
        )
        self.UpdateLabel = grpclib.client.UnaryUnaryMethod(
            channel,
            '/kentik.label.v202210.LabelService/UpdateLabel',
            kentik.label.v202210.label_pb2.UpdateLabelRequest,
            kentik.label.v202210.label_pb2.UpdateLabelResponse,
        )
        self.DeleteLabel = grpclib.client.UnaryUnaryMethod(
            channel,
            '/kentik.label.v202210.LabelService/DeleteLabel',
            kentik.label.v202210.label_pb2.DeleteLabelRequest,
            kentik.label.v202210.label_pb2.DeleteLabelResponse,
        )
