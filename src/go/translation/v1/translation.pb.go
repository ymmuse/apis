// Code generated by protoc-gen-go. DO NOT EDIT.
// source: translation/v1/translation.proto

package translation

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"
import _ "github.com/golang/protobuf/ptypes/any"
import duration "github.com/golang/protobuf/ptypes/duration"
import _ "github.com/golang/protobuf/ptypes/timestamp"
import _ "google.golang.org/genproto/googleapis/api/annotations"
import v1 "google.golang.org/genproto/googleapis/cloud/speech/v1"
import _ "google.golang.org/genproto/googleapis/longrunning"
import status "google.golang.org/genproto/googleapis/rpc/status"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type TranslationRequest struct {
	// Media Identity
	MediaIdentity string `protobuf:"bytes,1,opt,name=media_identity,json=mediaIdentity,proto3" json:"media_identity,omitempty"`
	// oneof case 1
	// target language
	// ISO-639-1 Code https://cloud.google.com/translate/docs/languages
	LanguageCode string `protobuf:"bytes,2,opt,name=language_code,json=languageCode,proto3" json:"language_code,omitempty"`
	// the format of the transcripts
	Format string `protobuf:"bytes,3,opt,name=format,proto3" json:"format,omitempty"`
	// oneof case 2
	// return translate result by transcript_identity
	TranscriptIdentity string `protobuf:"bytes,4,opt,name=transcript_identity,json=transcriptIdentity,proto3" json:"transcript_identity,omitempty"`
	// position of the transcript relative to the begginning of the audio or video
	StartTime *duration.Duration `protobuf:"bytes,6,opt,name=start_time,json=startTime,proto3" json:"start_time,omitempty"`
	// names for more possible results
	ExtraNames           string   `protobuf:"bytes,7,opt,name=extra_names,json=extraNames,proto3" json:"extra_names,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TranslationRequest) Reset()         { *m = TranslationRequest{} }
func (m *TranslationRequest) String() string { return proto.CompactTextString(m) }
func (*TranslationRequest) ProtoMessage()    {}
func (*TranslationRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{0}
}
func (m *TranslationRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TranslationRequest.Unmarshal(m, b)
}
func (m *TranslationRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TranslationRequest.Marshal(b, m, deterministic)
}
func (dst *TranslationRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TranslationRequest.Merge(dst, src)
}
func (m *TranslationRequest) XXX_Size() int {
	return xxx_messageInfo_TranslationRequest.Size(m)
}
func (m *TranslationRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_TranslationRequest.DiscardUnknown(m)
}

var xxx_messageInfo_TranslationRequest proto.InternalMessageInfo

func (m *TranslationRequest) GetMediaIdentity() string {
	if m != nil {
		return m.MediaIdentity
	}
	return ""
}

func (m *TranslationRequest) GetLanguageCode() string {
	if m != nil {
		return m.LanguageCode
	}
	return ""
}

func (m *TranslationRequest) GetFormat() string {
	if m != nil {
		return m.Format
	}
	return ""
}

func (m *TranslationRequest) GetTranscriptIdentity() string {
	if m != nil {
		return m.TranscriptIdentity
	}
	return ""
}

func (m *TranslationRequest) GetStartTime() *duration.Duration {
	if m != nil {
		return m.StartTime
	}
	return nil
}

func (m *TranslationRequest) GetExtraNames() string {
	if m != nil {
		return m.ExtraNames
	}
	return ""
}

type TranslationResponse struct {
	// *Output-only* If set, returns a [google.rpc.Status][google.rpc.Status] message that
	// specifies the error for the operation.
	// return 404 if no result, in this case, client should use StreamingTranslationRequest
	Error *status.Status `protobuf:"bytes,1,opt,name=error,proto3" json:"error,omitempty"`
	// the identity, can be used in TranslationRequest
	TranscriptIdentity string `protobuf:"bytes,2,opt,name=transcript_identity,json=transcriptIdentity,proto3" json:"transcript_identity,omitempty"`
	// the start and end of the transcripts
	StartTime *duration.Duration `protobuf:"bytes,3,opt,name=start_time,json=startTime,proto3" json:"start_time,omitempty"`
	EndTime   *duration.Duration `protobuf:"bytes,4,opt,name=end_time,json=endTime,proto3" json:"end_time,omitempty"`
	// total line of the transcripts there should be
	ToBeContinued bool `protobuf:"varint,5,opt,name=to_be_continued,json=toBeContinued,proto3" json:"to_be_continued,omitempty"`
	// next best translation results
	NextbestTranscriptId []string `protobuf:"bytes,6,rep,name=nextbest_transcript_id,json=nextbestTranscriptId,proto3" json:"nextbest_transcript_id,omitempty"`
	// each line of the transcript
	Transcript           []string `protobuf:"bytes,7,rep,name=transcript,proto3" json:"transcript,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *TranslationResponse) Reset()         { *m = TranslationResponse{} }
func (m *TranslationResponse) String() string { return proto.CompactTextString(m) }
func (*TranslationResponse) ProtoMessage()    {}
func (*TranslationResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{1}
}
func (m *TranslationResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_TranslationResponse.Unmarshal(m, b)
}
func (m *TranslationResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_TranslationResponse.Marshal(b, m, deterministic)
}
func (dst *TranslationResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_TranslationResponse.Merge(dst, src)
}
func (m *TranslationResponse) XXX_Size() int {
	return xxx_messageInfo_TranslationResponse.Size(m)
}
func (m *TranslationResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_TranslationResponse.DiscardUnknown(m)
}

var xxx_messageInfo_TranslationResponse proto.InternalMessageInfo

func (m *TranslationResponse) GetError() *status.Status {
	if m != nil {
		return m.Error
	}
	return nil
}

func (m *TranslationResponse) GetTranscriptIdentity() string {
	if m != nil {
		return m.TranscriptIdentity
	}
	return ""
}

func (m *TranslationResponse) GetStartTime() *duration.Duration {
	if m != nil {
		return m.StartTime
	}
	return nil
}

func (m *TranslationResponse) GetEndTime() *duration.Duration {
	if m != nil {
		return m.EndTime
	}
	return nil
}

func (m *TranslationResponse) GetToBeContinued() bool {
	if m != nil {
		return m.ToBeContinued
	}
	return false
}

func (m *TranslationResponse) GetNextbestTranscriptId() []string {
	if m != nil {
		return m.NextbestTranscriptId
	}
	return nil
}

func (m *TranslationResponse) GetTranscript() []string {
	if m != nil {
		return m.Transcript
	}
	return nil
}

type DetectionRequest struct {
	// the text to be detect
	Text                 string   `protobuf:"bytes,1,opt,name=text,proto3" json:"text,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DetectionRequest) Reset()         { *m = DetectionRequest{} }
func (m *DetectionRequest) String() string { return proto.CompactTextString(m) }
func (*DetectionRequest) ProtoMessage()    {}
func (*DetectionRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{2}
}
func (m *DetectionRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DetectionRequest.Unmarshal(m, b)
}
func (m *DetectionRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DetectionRequest.Marshal(b, m, deterministic)
}
func (dst *DetectionRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DetectionRequest.Merge(dst, src)
}
func (m *DetectionRequest) XXX_Size() int {
	return xxx_messageInfo_DetectionRequest.Size(m)
}
func (m *DetectionRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_DetectionRequest.DiscardUnknown(m)
}

var xxx_messageInfo_DetectionRequest proto.InternalMessageInfo

func (m *DetectionRequest) GetText() string {
	if m != nil {
		return m.Text
	}
	return ""
}

type DetectionResponse struct {
	// *Output-only* the language code of the detection result
	LanguageCode string `protobuf:"bytes,1,opt,name=language_code,json=languageCode,proto3" json:"language_code,omitempty"`
	// *Output-only* The confidence estimate between 0.0 and 1.0. A higher number
	// indicates an estimated greater likelihood that the detection result are
	// correct.
	Confidence           float32  `protobuf:"fixed32,2,opt,name=confidence,proto3" json:"confidence,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *DetectionResponse) Reset()         { *m = DetectionResponse{} }
func (m *DetectionResponse) String() string { return proto.CompactTextString(m) }
func (*DetectionResponse) ProtoMessage()    {}
func (*DetectionResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{3}
}
func (m *DetectionResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_DetectionResponse.Unmarshal(m, b)
}
func (m *DetectionResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_DetectionResponse.Marshal(b, m, deterministic)
}
func (dst *DetectionResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_DetectionResponse.Merge(dst, src)
}
func (m *DetectionResponse) XXX_Size() int {
	return xxx_messageInfo_DetectionResponse.Size(m)
}
func (m *DetectionResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_DetectionResponse.DiscardUnknown(m)
}

var xxx_messageInfo_DetectionResponse proto.InternalMessageInfo

func (m *DetectionResponse) GetLanguageCode() string {
	if m != nil {
		return m.LanguageCode
	}
	return ""
}

func (m *DetectionResponse) GetConfidence() float32 {
	if m != nil {
		return m.Confidence
	}
	return 0
}

// The top-level message sent by the client for the `StreamingRecognize` method.
// Multiple `StreamingTranslationRequest` messages are sent. The first message
// must contain a `streaming_config` message and must not contain `audio` data.
// All subsequent messages must contain `audio` data and must not contain a
// `streaming_config` message.
type StreamingTranslationRequest struct {
	// The streaming request, which is either a streaming config or audio content.
	//
	// Types that are valid to be assigned to StreamingRequest:
	//	*StreamingTranslationRequest_StreamingConfig
	//	*StreamingTranslationRequest_AudioContent
	StreamingRequest     isStreamingTranslationRequest_StreamingRequest `protobuf_oneof:"streaming_request"`
	XXX_NoUnkeyedLiteral struct{}                                       `json:"-"`
	XXX_unrecognized     []byte                                         `json:"-"`
	XXX_sizecache        int32                                          `json:"-"`
}

func (m *StreamingTranslationRequest) Reset()         { *m = StreamingTranslationRequest{} }
func (m *StreamingTranslationRequest) String() string { return proto.CompactTextString(m) }
func (*StreamingTranslationRequest) ProtoMessage()    {}
func (*StreamingTranslationRequest) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{4}
}
func (m *StreamingTranslationRequest) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StreamingTranslationRequest.Unmarshal(m, b)
}
func (m *StreamingTranslationRequest) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StreamingTranslationRequest.Marshal(b, m, deterministic)
}
func (dst *StreamingTranslationRequest) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StreamingTranslationRequest.Merge(dst, src)
}
func (m *StreamingTranslationRequest) XXX_Size() int {
	return xxx_messageInfo_StreamingTranslationRequest.Size(m)
}
func (m *StreamingTranslationRequest) XXX_DiscardUnknown() {
	xxx_messageInfo_StreamingTranslationRequest.DiscardUnknown(m)
}

var xxx_messageInfo_StreamingTranslationRequest proto.InternalMessageInfo

type isStreamingTranslationRequest_StreamingRequest interface {
	isStreamingTranslationRequest_StreamingRequest()
}

type StreamingTranslationRequest_StreamingConfig struct {
	StreamingConfig *v1.RecognitionConfig `protobuf:"bytes,1,opt,name=streaming_config,json=streamingConfig,proto3,oneof"`
}
type StreamingTranslationRequest_AudioContent struct {
	AudioContent []byte `protobuf:"bytes,2,opt,name=audio_content,json=audioContent,proto3,oneof"`
}

func (*StreamingTranslationRequest_StreamingConfig) isStreamingTranslationRequest_StreamingRequest() {}
func (*StreamingTranslationRequest_AudioContent) isStreamingTranslationRequest_StreamingRequest()    {}

func (m *StreamingTranslationRequest) GetStreamingRequest() isStreamingTranslationRequest_StreamingRequest {
	if m != nil {
		return m.StreamingRequest
	}
	return nil
}

func (m *StreamingTranslationRequest) GetStreamingConfig() *v1.RecognitionConfig {
	if x, ok := m.GetStreamingRequest().(*StreamingTranslationRequest_StreamingConfig); ok {
		return x.StreamingConfig
	}
	return nil
}

func (m *StreamingTranslationRequest) GetAudioContent() []byte {
	if x, ok := m.GetStreamingRequest().(*StreamingTranslationRequest_AudioContent); ok {
		return x.AudioContent
	}
	return nil
}

// XXX_OneofFuncs is for the internal use of the proto package.
func (*StreamingTranslationRequest) XXX_OneofFuncs() (func(msg proto.Message, b *proto.Buffer) error, func(msg proto.Message, tag, wire int, b *proto.Buffer) (bool, error), func(msg proto.Message) (n int), []interface{}) {
	return _StreamingTranslationRequest_OneofMarshaler, _StreamingTranslationRequest_OneofUnmarshaler, _StreamingTranslationRequest_OneofSizer, []interface{}{
		(*StreamingTranslationRequest_StreamingConfig)(nil),
		(*StreamingTranslationRequest_AudioContent)(nil),
	}
}

func _StreamingTranslationRequest_OneofMarshaler(msg proto.Message, b *proto.Buffer) error {
	m := msg.(*StreamingTranslationRequest)
	// streaming_request
	switch x := m.StreamingRequest.(type) {
	case *StreamingTranslationRequest_StreamingConfig:
		b.EncodeVarint(1<<3 | proto.WireBytes)
		if err := b.EncodeMessage(x.StreamingConfig); err != nil {
			return err
		}
	case *StreamingTranslationRequest_AudioContent:
		b.EncodeVarint(2<<3 | proto.WireBytes)
		b.EncodeRawBytes(x.AudioContent)
	case nil:
	default:
		return fmt.Errorf("StreamingTranslationRequest.StreamingRequest has unexpected type %T", x)
	}
	return nil
}

func _StreamingTranslationRequest_OneofUnmarshaler(msg proto.Message, tag, wire int, b *proto.Buffer) (bool, error) {
	m := msg.(*StreamingTranslationRequest)
	switch tag {
	case 1: // streaming_request.streaming_config
		if wire != proto.WireBytes {
			return true, proto.ErrInternalBadWireType
		}
		msg := new(v1.RecognitionConfig)
		err := b.DecodeMessage(msg)
		m.StreamingRequest = &StreamingTranslationRequest_StreamingConfig{msg}
		return true, err
	case 2: // streaming_request.audio_content
		if wire != proto.WireBytes {
			return true, proto.ErrInternalBadWireType
		}
		x, err := b.DecodeRawBytes(true)
		m.StreamingRequest = &StreamingTranslationRequest_AudioContent{x}
		return true, err
	default:
		return false, nil
	}
}

func _StreamingTranslationRequest_OneofSizer(msg proto.Message) (n int) {
	m := msg.(*StreamingTranslationRequest)
	// streaming_request
	switch x := m.StreamingRequest.(type) {
	case *StreamingTranslationRequest_StreamingConfig:
		s := proto.Size(x.StreamingConfig)
		n += 1 // tag and wire
		n += proto.SizeVarint(uint64(s))
		n += s
	case *StreamingTranslationRequest_AudioContent:
		n += 1 // tag and wire
		n += proto.SizeVarint(uint64(len(x.AudioContent)))
		n += len(x.AudioContent)
	case nil:
	default:
		panic(fmt.Sprintf("proto: unexpected type %T in oneof", x))
	}
	return n
}

type StreamingTranslationResponse struct {
	// *Output-only* If set, returns a [google.rpc.Status][google.rpc.Status] message that
	// specifies the error for the operation.
	Error *status.Status `protobuf:"bytes,1,opt,name=error,proto3" json:"error,omitempty"`
	// *Output-only* This repeated list contains zero or more results that
	// correspond to consecutive portions of the audio currently being processed.
	// It contains zero or more `is_final=false` results followed by zero or one
	// `is_final=true` result (the newly settled portion).
	Results              []*StreamingTranslationResult `protobuf:"bytes,2,rep,name=results,proto3" json:"results,omitempty"`
	XXX_NoUnkeyedLiteral struct{}                      `json:"-"`
	XXX_unrecognized     []byte                        `json:"-"`
	XXX_sizecache        int32                         `json:"-"`
}

func (m *StreamingTranslationResponse) Reset()         { *m = StreamingTranslationResponse{} }
func (m *StreamingTranslationResponse) String() string { return proto.CompactTextString(m) }
func (*StreamingTranslationResponse) ProtoMessage()    {}
func (*StreamingTranslationResponse) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{5}
}
func (m *StreamingTranslationResponse) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StreamingTranslationResponse.Unmarshal(m, b)
}
func (m *StreamingTranslationResponse) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StreamingTranslationResponse.Marshal(b, m, deterministic)
}
func (dst *StreamingTranslationResponse) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StreamingTranslationResponse.Merge(dst, src)
}
func (m *StreamingTranslationResponse) XXX_Size() int {
	return xxx_messageInfo_StreamingTranslationResponse.Size(m)
}
func (m *StreamingTranslationResponse) XXX_DiscardUnknown() {
	xxx_messageInfo_StreamingTranslationResponse.DiscardUnknown(m)
}

var xxx_messageInfo_StreamingTranslationResponse proto.InternalMessageInfo

func (m *StreamingTranslationResponse) GetError() *status.Status {
	if m != nil {
		return m.Error
	}
	return nil
}

func (m *StreamingTranslationResponse) GetResults() []*StreamingTranslationResult {
	if m != nil {
		return m.Results
	}
	return nil
}

type StreamingTranslationResult struct {
	// *Output-only* Transcript text representing the words that the user spoke.
	Transcript string `protobuf:"bytes,1,opt,name=transcript,proto3" json:"transcript,omitempty"`
	// *Output-only* The confidence estimate between 0.0 and 1.0. A higher number
	// indicates an estimated greater likelihood that the recognized words are
	// correct. This field is typically provided only for the top hypothesis, and
	// only for `is_final=true` results. Clients should not rely on the
	// `confidence` field as it is not guaranteed to be accurate or consistent.
	// The default of 0.0 is a sentinel value indicating `confidence` was not set.
	Confidence float32 `protobuf:"fixed32,2,opt,name=confidence,proto3" json:"confidence,omitempty"`
	// *Output-only* An estimate of the likelihood that the recognizer will not
	// change its guess about this interim result. Values range from 0.0
	// (completely unstable) to 1.0 (completely stable).
	// This field is only provided for interim results (`is_final=false`).
	// The default of 0.0 is a sentinel value indicating `stability` was not set.
	Stability float32 `protobuf:"fixed32,3,opt,name=stability,proto3" json:"stability,omitempty"`
	// *Output-only* Time offset relative to the beginning of the audio,
	// and corresponding to the start of the spoken word.
	// This field is only set if `enable_word_time_offsets=true` and only
	// in the top hypothesis.
	// This is an experimental feature and the accuracy of the time offset can
	// vary.
	StartTime *duration.Duration `protobuf:"bytes,4,opt,name=start_time,json=startTime,proto3" json:"start_time,omitempty"`
	// *Output-only* Time offset relative to the beginning of the audio,
	// and corresponding to the end of the spoken word.
	// This field is only set if `enable_word_time_offsets=true` and only
	// in the top hypothesis.
	// This is an experimental feature and the accuracy of the time offset can
	// vary.
	EndTime              *duration.Duration `protobuf:"bytes,5,opt,name=end_time,json=endTime,proto3" json:"end_time,omitempty"`
	XXX_NoUnkeyedLiteral struct{}           `json:"-"`
	XXX_unrecognized     []byte             `json:"-"`
	XXX_sizecache        int32              `json:"-"`
}

func (m *StreamingTranslationResult) Reset()         { *m = StreamingTranslationResult{} }
func (m *StreamingTranslationResult) String() string { return proto.CompactTextString(m) }
func (*StreamingTranslationResult) ProtoMessage()    {}
func (*StreamingTranslationResult) Descriptor() ([]byte, []int) {
	return fileDescriptor_translation_90c387c1250e95f1, []int{6}
}
func (m *StreamingTranslationResult) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_StreamingTranslationResult.Unmarshal(m, b)
}
func (m *StreamingTranslationResult) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_StreamingTranslationResult.Marshal(b, m, deterministic)
}
func (dst *StreamingTranslationResult) XXX_Merge(src proto.Message) {
	xxx_messageInfo_StreamingTranslationResult.Merge(dst, src)
}
func (m *StreamingTranslationResult) XXX_Size() int {
	return xxx_messageInfo_StreamingTranslationResult.Size(m)
}
func (m *StreamingTranslationResult) XXX_DiscardUnknown() {
	xxx_messageInfo_StreamingTranslationResult.DiscardUnknown(m)
}

var xxx_messageInfo_StreamingTranslationResult proto.InternalMessageInfo

func (m *StreamingTranslationResult) GetTranscript() string {
	if m != nil {
		return m.Transcript
	}
	return ""
}

func (m *StreamingTranslationResult) GetConfidence() float32 {
	if m != nil {
		return m.Confidence
	}
	return 0
}

func (m *StreamingTranslationResult) GetStability() float32 {
	if m != nil {
		return m.Stability
	}
	return 0
}

func (m *StreamingTranslationResult) GetStartTime() *duration.Duration {
	if m != nil {
		return m.StartTime
	}
	return nil
}

func (m *StreamingTranslationResult) GetEndTime() *duration.Duration {
	if m != nil {
		return m.EndTime
	}
	return nil
}

func init() {
	proto.RegisterType((*TranslationRequest)(nil), "sagittarius.translation.v1.TranslationRequest")
	proto.RegisterType((*TranslationResponse)(nil), "sagittarius.translation.v1.TranslationResponse")
	proto.RegisterType((*DetectionRequest)(nil), "sagittarius.translation.v1.DetectionRequest")
	proto.RegisterType((*DetectionResponse)(nil), "sagittarius.translation.v1.DetectionResponse")
	proto.RegisterType((*StreamingTranslationRequest)(nil), "sagittarius.translation.v1.StreamingTranslationRequest")
	proto.RegisterType((*StreamingTranslationResponse)(nil), "sagittarius.translation.v1.StreamingTranslationResponse")
	proto.RegisterType((*StreamingTranslationResult)(nil), "sagittarius.translation.v1.StreamingTranslationResult")
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// TranslationClient is the client API for Translation service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type TranslationClient interface {
	// Translate media(audio or video) by media identity
	TranslateMedia(ctx context.Context, in *TranslationRequest, opts ...grpc.CallOption) (*TranslationResponse, error)
	// detect the language of text
	DetectLanguage(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error)
	// Performs bidirectional streaming audio translation: receive results while
	// sending audio. This method is only available via the gRPC API (not REST).
	StreamingTranslation(ctx context.Context, opts ...grpc.CallOption) (Translation_StreamingTranslationClient, error)
}

type translationClient struct {
	cc *grpc.ClientConn
}

func NewTranslationClient(cc *grpc.ClientConn) TranslationClient {
	return &translationClient{cc}
}

func (c *translationClient) TranslateMedia(ctx context.Context, in *TranslationRequest, opts ...grpc.CallOption) (*TranslationResponse, error) {
	out := new(TranslationResponse)
	err := c.cc.Invoke(ctx, "/sagittarius.translation.v1.Translation/TranslateMedia", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *translationClient) DetectLanguage(ctx context.Context, in *DetectionRequest, opts ...grpc.CallOption) (*DetectionResponse, error) {
	out := new(DetectionResponse)
	err := c.cc.Invoke(ctx, "/sagittarius.translation.v1.Translation/DetectLanguage", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *translationClient) StreamingTranslation(ctx context.Context, opts ...grpc.CallOption) (Translation_StreamingTranslationClient, error) {
	stream, err := c.cc.NewStream(ctx, &_Translation_serviceDesc.Streams[0], "/sagittarius.translation.v1.Translation/StreamingTranslation", opts...)
	if err != nil {
		return nil, err
	}
	x := &translationStreamingTranslationClient{stream}
	return x, nil
}

type Translation_StreamingTranslationClient interface {
	Send(*StreamingTranslationRequest) error
	Recv() (*StreamingTranslationResponse, error)
	grpc.ClientStream
}

type translationStreamingTranslationClient struct {
	grpc.ClientStream
}

func (x *translationStreamingTranslationClient) Send(m *StreamingTranslationRequest) error {
	return x.ClientStream.SendMsg(m)
}

func (x *translationStreamingTranslationClient) Recv() (*StreamingTranslationResponse, error) {
	m := new(StreamingTranslationResponse)
	if err := x.ClientStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

// TranslationServer is the server API for Translation service.
type TranslationServer interface {
	// Translate media(audio or video) by media identity
	TranslateMedia(context.Context, *TranslationRequest) (*TranslationResponse, error)
	// detect the language of text
	DetectLanguage(context.Context, *DetectionRequest) (*DetectionResponse, error)
	// Performs bidirectional streaming audio translation: receive results while
	// sending audio. This method is only available via the gRPC API (not REST).
	StreamingTranslation(Translation_StreamingTranslationServer) error
}

func RegisterTranslationServer(s *grpc.Server, srv TranslationServer) {
	s.RegisterService(&_Translation_serviceDesc, srv)
}

func _Translation_TranslateMedia_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(TranslationRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(TranslationServer).TranslateMedia(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/sagittarius.translation.v1.Translation/TranslateMedia",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(TranslationServer).TranslateMedia(ctx, req.(*TranslationRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Translation_DetectLanguage_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(DetectionRequest)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(TranslationServer).DetectLanguage(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/sagittarius.translation.v1.Translation/DetectLanguage",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(TranslationServer).DetectLanguage(ctx, req.(*DetectionRequest))
	}
	return interceptor(ctx, in, info, handler)
}

func _Translation_StreamingTranslation_Handler(srv interface{}, stream grpc.ServerStream) error {
	return srv.(TranslationServer).StreamingTranslation(&translationStreamingTranslationServer{stream})
}

type Translation_StreamingTranslationServer interface {
	Send(*StreamingTranslationResponse) error
	Recv() (*StreamingTranslationRequest, error)
	grpc.ServerStream
}

type translationStreamingTranslationServer struct {
	grpc.ServerStream
}

func (x *translationStreamingTranslationServer) Send(m *StreamingTranslationResponse) error {
	return x.ServerStream.SendMsg(m)
}

func (x *translationStreamingTranslationServer) Recv() (*StreamingTranslationRequest, error) {
	m := new(StreamingTranslationRequest)
	if err := x.ServerStream.RecvMsg(m); err != nil {
		return nil, err
	}
	return m, nil
}

var _Translation_serviceDesc = grpc.ServiceDesc{
	ServiceName: "sagittarius.translation.v1.Translation",
	HandlerType: (*TranslationServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "TranslateMedia",
			Handler:    _Translation_TranslateMedia_Handler,
		},
		{
			MethodName: "DetectLanguage",
			Handler:    _Translation_DetectLanguage_Handler,
		},
	},
	Streams: []grpc.StreamDesc{
		{
			StreamName:    "StreamingTranslation",
			Handler:       _Translation_StreamingTranslation_Handler,
			ServerStreams: true,
			ClientStreams: true,
		},
	},
	Metadata: "translation/v1/translation.proto",
}

func init() {
	proto.RegisterFile("translation/v1/translation.proto", fileDescriptor_translation_90c387c1250e95f1)
}

var fileDescriptor_translation_90c387c1250e95f1 = []byte{
	// 838 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x9c, 0x54, 0xc1, 0x6e, 0xdb, 0x46,
	0x10, 0xcd, 0x4a, 0xb2, 0x14, 0x8f, 0x2c, 0xc7, 0x59, 0x05, 0x29, 0xa3, 0xb8, 0x8e, 0xca, 0x20,
	0x81, 0x52, 0xb4, 0x64, 0xad, 0x06, 0x6d, 0xe0, 0xa3, 0x14, 0xa0, 0x29, 0x90, 0x16, 0x06, 0x63,
	0x14, 0x45, 0x2f, 0xc4, 0x8a, 0x5c, 0xb3, 0x0b, 0x50, 0xbb, 0xec, 0xee, 0xd2, 0x70, 0x60, 0xf8,
	0x52, 0xf4, 0x5a, 0xa0, 0x40, 0x6f, 0xfd, 0x8b, 0x7e, 0x44, 0xbf, 0xa0, 0xf7, 0x9e, 0x7a, 0xea,
	0x17, 0xe4, 0x58, 0x70, 0x49, 0x5a, 0x94, 0x22, 0xd9, 0xb2, 0x6f, 0xdc, 0x37, 0x6f, 0x39, 0xf3,
	0x66, 0xdf, 0x0c, 0xf4, 0xb5, 0x24, 0x5c, 0xc5, 0x44, 0x33, 0xc1, 0xdd, 0x93, 0x7d, 0xb7, 0x72,
	0x74, 0x12, 0x29, 0xb4, 0xc0, 0x3d, 0x45, 0x22, 0xa6, 0x35, 0x91, 0x2c, 0x55, 0x4e, 0x35, 0x7c,
	0xb2, 0xdf, 0xdb, 0x8d, 0x84, 0x88, 0x62, 0xea, 0x92, 0x84, 0xb9, 0x84, 0x73, 0xa1, 0x4d, 0x44,
	0xe5, 0x37, 0x7b, 0x8f, 0x8b, 0x68, 0x2c, 0x78, 0x24, 0x53, 0xce, 0x19, 0x8f, 0x5c, 0x91, 0x50,
	0x39, 0x47, 0x7a, 0x50, 0x90, 0xcc, 0x69, 0x92, 0x1e, 0xbb, 0x84, 0xbf, 0x2d, 0x42, 0x7b, 0x8b,
	0xa1, 0x30, 0x95, 0x95, 0xca, 0x7a, 0x8f, 0x16, 0xe3, 0x9a, 0x4d, 0xa9, 0xd2, 0x64, 0x9a, 0x14,
	0x84, 0x0f, 0x0a, 0x82, 0x4c, 0x02, 0x57, 0x69, 0xa2, 0xd3, 0x32, 0xe9, 0xb3, 0x22, 0x10, 0xc4,
	0x22, 0x0d, 0x5d, 0x95, 0x50, 0x1a, 0xfc, 0x98, 0xa9, 0x37, 0x67, 0x3f, 0x3f, 0xe7, 0x54, 0xfb,
	0x97, 0x1a, 0xe0, 0xa3, 0x99, 0x6a, 0x8f, 0xfe, 0x94, 0x52, 0xa5, 0xf1, 0x13, 0xd8, 0x9e, 0xd2,
	0x90, 0x11, 0x9f, 0x85, 0x94, 0x6b, 0xa6, 0xdf, 0x5a, 0xa8, 0x8f, 0x06, 0x9b, 0x5e, 0xc7, 0xa0,
	0x5f, 0x17, 0x20, 0x7e, 0x0c, 0x9d, 0x98, 0xf0, 0x28, 0x25, 0x11, 0xf5, 0x03, 0x11, 0x52, 0xab,
	0x66, 0x58, 0x5b, 0x25, 0x38, 0x16, 0x21, 0xc5, 0xf7, 0xa1, 0x79, 0x2c, 0xe4, 0x94, 0x68, 0xab,
	0x6e, 0xa2, 0xc5, 0x09, 0xbb, 0xd0, 0x35, 0xfd, 0x0e, 0x24, 0x4b, 0xf4, 0x2c, 0x51, 0xc3, 0x90,
	0xf0, 0x2c, 0x74, 0x91, 0xed, 0x05, 0x80, 0xd2, 0x44, 0x6a, 0x3f, 0x6b, 0x84, 0xd5, 0xec, 0xa3,
	0x41, 0x7b, 0xf8, 0xc0, 0xc9, 0xb5, 0x3a, 0x65, 0x97, 0x9c, 0x97, 0x45, 0x17, 0xbd, 0x4d, 0x43,
	0x3e, 0x62, 0x53, 0x8a, 0x1f, 0x41, 0x9b, 0x9e, 0x6a, 0x49, 0x7c, 0x4e, 0xa6, 0x54, 0x59, 0x2d,
	0x93, 0x02, 0x0c, 0xf4, 0x6d, 0x86, 0xd8, 0xff, 0xd4, 0xa0, 0x3b, 0xd7, 0x06, 0x95, 0x08, 0xae,
	0x28, 0x1e, 0xc0, 0x06, 0x95, 0x52, 0x48, 0x23, 0xbf, 0x3d, 0xc4, 0x65, 0x36, 0x99, 0x04, 0xce,
	0x1b, 0xd3, 0x72, 0x2f, 0x27, 0xac, 0x52, 0x53, 0x5b, 0x53, 0x4d, 0xfd, 0x1a, 0x6a, 0x9e, 0xc3,
	0x6d, 0xca, 0xc3, 0xfc, 0x5e, 0xe3, 0xaa, 0x7b, 0x2d, 0xca, 0x43, 0x73, 0xeb, 0x29, 0xdc, 0xd1,
	0xc2, 0x9f, 0x64, 0x0f, 0xc5, 0x35, 0xe3, 0x29, 0x0d, 0xad, 0x8d, 0x3e, 0x1a, 0xdc, 0xf6, 0x3a,
	0x5a, 0x8c, 0xe8, 0xb8, 0x04, 0xf1, 0x73, 0xb8, 0xcf, 0xe9, 0xa9, 0x9e, 0x50, 0xa5, 0xfd, 0x39,
	0x45, 0x56, 0xb3, 0x5f, 0x1f, 0x6c, 0x7a, 0xf7, 0xca, 0xe8, 0x51, 0x45, 0x13, 0xde, 0x03, 0x98,
	0x91, 0xad, 0x96, 0x61, 0x56, 0x10, 0xfb, 0x29, 0xec, 0xbc, 0xa4, 0x9a, 0x06, 0x55, 0x93, 0x61,
	0x68, 0x68, 0x7a, 0xaa, 0x0b, 0x6b, 0x99, 0x6f, 0xfb, 0x7b, 0xb8, 0x5b, 0xe1, 0x15, 0xaf, 0xf0,
	0x9e, 0xcd, 0xd0, 0x12, 0x9b, 0xed, 0x01, 0x04, 0x82, 0x1f, 0x67, 0x9d, 0x0f, 0x72, 0x23, 0xd6,
	0xbc, 0x0a, 0x62, 0xff, 0x89, 0xe0, 0xe1, 0x1b, 0x2d, 0x29, 0x99, 0x32, 0x1e, 0x2d, 0xb1, 0xfc,
	0x77, 0xb0, 0xa3, 0xca, 0xb0, 0x6f, 0xee, 0x45, 0xc5, 0xab, 0x3f, 0x2b, 0xbb, 0x6b, 0xe6, 0xc7,
	0x29, 0xe6, 0xe7, 0x64, 0xdf, 0xf1, 0x68, 0x20, 0x22, 0xce, 0xb2, 0xbf, 0x8c, 0xcd, 0x85, 0x57,
	0xb7, 0xbc, 0x3b, 0x17, 0x3f, 0xc9, 0x21, 0xfc, 0x04, 0x3a, 0x24, 0x0d, 0x99, 0x30, 0x7d, 0xa7,
	0x5c, 0x9b, 0xd2, 0xb6, 0x5e, 0xdd, 0xf2, 0xb6, 0x0c, 0x3c, 0xce, 0xd1, 0x51, 0x17, 0xee, 0xce,
	0xd2, 0xcb, 0xbc, 0x26, 0xfb, 0x0f, 0x04, 0xbb, 0xcb, 0x6b, 0xbe, 0xb6, 0x3f, 0x0f, 0xa1, 0x25,
	0xa9, 0x4a, 0x63, 0xad, 0xac, 0x5a, 0xbf, 0x3e, 0x68, 0x0f, 0xbf, 0x70, 0x56, 0x6f, 0x3e, 0x67,
	0x45, 0xd2, 0x34, 0xd6, 0x5e, 0xf9, 0x1b, 0xfb, 0x3f, 0x04, 0xbd, 0xd5, 0xbc, 0x05, 0x47, 0xe4,
	0x2f, 0x56, 0x41, 0xae, 0x7a, 0x2f, 0xbc, 0x0b, 0x99, 0xe5, 0x27, 0x2c, 0xce, 0xc6, 0xa8, 0x6e,
	0xc2, 0x33, 0x60, 0x61, 0x7a, 0x1a, 0x37, 0x9c, 0x9e, 0x8d, 0x75, 0xa7, 0x67, 0xf8, 0xae, 0x0e,
	0xed, 0x8a, 0x46, 0xfc, 0x17, 0x82, 0xed, 0xf2, 0x4c, 0xbf, 0xc9, 0x96, 0x22, 0x76, 0x2e, 0x6b,
	0xe8, 0xfb, 0x86, 0xeb, 0xb9, 0x6b, 0xf3, 0xf3, 0xc7, 0xb6, 0xbd, 0x9f, 0xff, 0xfe, 0xf7, 0xf7,
	0xda, 0x6b, 0xfc, 0x55, 0xb6, 0xcb, 0xcd, 0x22, 0x76, 0xcf, 0xe6, 0xb7, 0xf4, 0xb9, 0x5b, 0x8e,
	0x84, 0x7b, 0x36, 0x37, 0x31, 0xe7, 0xee, 0xac, 0xf3, 0x07, 0x67, 0xf9, 0x02, 0x3e, 0x3f, 0x40,
	0x1f, 0xe3, 0xdf, 0x10, 0x6c, 0xe7, 0x03, 0xf7, 0xba, 0xe0, 0xe3, 0x4f, 0x2e, 0xab, 0x6b, 0x71,
	0x88, 0x7b, 0x9f, 0xae, 0xc9, 0x2e, 0x34, 0x7c, 0x64, 0x34, 0x3c, 0xc4, 0xdd, 0x4c, 0xc3, 0x45,
	0xb1, 0xa1, 0xe1, 0x1d, 0x98, 0x15, 0x80, 0x7f, 0x45, 0x70, 0x6f, 0x99, 0xaf, 0xf0, 0x97, 0xd7,
	0x77, 0x6c, 0x5e, 0xe3, 0x8b, 0x1b, 0x58, 0xdd, 0x94, 0x3b, 0x40, 0x9f, 0xa1, 0xd1, 0x18, 0x3e,
	0x24, 0xec, 0x92, 0x3f, 0x8c, 0x76, 0x2a, 0x37, 0x0f, 0x33, 0x0b, 0x1d, 0xa2, 0x1f, 0xda, 0x15,
	0xce, 0x3b, 0x84, 0x26, 0x4d, 0xe3, 0xad, 0xcf, 0xff, 0x0f, 0x00, 0x00, 0xff, 0xff, 0x7e, 0xa0,
	0x6a, 0xad, 0x91, 0x08, 0x00, 0x00,
}
