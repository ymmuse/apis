// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: training/v1/training.proto
// Original file comments:
// Copyright 2018 Sagittarius LLC.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_training_2fv1_2ftraining_2eproto__INCLUDED
#define GRPC_training_2fv1_2ftraining_2eproto__INCLUDED

#include "training/v1/training.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc_impl {
class CompletionQueue;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc_impl

namespace grpc {
namespace experimental {
template <typename RequestT, typename ResponseT>
class MessageAllocator;
}  // namespace experimental
}  // namespace grpc

namespace sagittarius {
namespace training {
namespace v1 {

// Trainng that implements Sagittarius Translation API
class Trainng final {
 public:
  static constexpr char const* service_full_name() {
    return "sagittarius.training.v1.Trainng";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Push accture traning data to server
    virtual ::grpc::Status PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::google::rpc::Status* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>> AsyncPushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>>(AsyncPushDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>> PrepareAsyncPushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>>(PrepareAsyncPushDataRaw(context, request, cq));
    }
    // Performs bidirectional streaming audio translation: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    std::unique_ptr< ::grpc::ClientWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>> StreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response) {
      return std::unique_ptr< ::grpc::ClientWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>>(StreamingTrainingRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>> AsyncStreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>>(AsyncStreamingTrainingRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>> PrepareAsyncStreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>>(PrepareAsyncStreamingTrainingRaw(context, response, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      // Push accture traning data to server
      virtual void PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PushData(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::rpc::Status* response, std::function<void(::grpc::Status)>) = 0;
      virtual void PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      virtual void PushData(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::rpc::Status* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      // Performs bidirectional streaming audio translation: receive results while
      // sending audio. This method is only available via the gRPC API (not REST).
      virtual void StreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::experimental::ClientWriteReactor< ::sagittarius::training::v1::StreamingTrainingRequest>* reactor) = 0;
    };
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>* AsyncPushDataRaw(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::google::rpc::Status>* PrepareAsyncPushDataRaw(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>* StreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>* AsyncStreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq, void* tag) = 0;
    virtual ::grpc::ClientAsyncWriterInterface< ::sagittarius::training::v1::StreamingTrainingRequest>* PrepareAsyncStreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::google::rpc::Status* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>> AsyncPushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>>(AsyncPushDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>> PrepareAsyncPushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>>(PrepareAsyncPushDataRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientWriter< ::sagittarius::training::v1::StreamingTrainingRequest>> StreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response) {
      return std::unique_ptr< ::grpc::ClientWriter< ::sagittarius::training::v1::StreamingTrainingRequest>>(StreamingTrainingRaw(context, response));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>> AsyncStreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq, void* tag) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>>(AsyncStreamingTrainingRaw(context, response, cq, tag));
    }
    std::unique_ptr< ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>> PrepareAsyncStreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>>(PrepareAsyncStreamingTrainingRaw(context, response, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response, std::function<void(::grpc::Status)>) override;
      void PushData(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::rpc::Status* response, std::function<void(::grpc::Status)>) override;
      void PushData(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void PushData(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::google::rpc::Status* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      void StreamingTraining(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::experimental::ClientWriteReactor< ::sagittarius::training::v1::StreamingTrainingRequest>* reactor) override;
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>* AsyncPushDataRaw(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::google::rpc::Status>* PrepareAsyncPushDataRaw(::grpc::ClientContext* context, const ::sagittarius::training::v1::TrainingData& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientWriter< ::sagittarius::training::v1::StreamingTrainingRequest>* StreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response) override;
    ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>* AsyncStreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq, void* tag) override;
    ::grpc::ClientAsyncWriter< ::sagittarius::training::v1::StreamingTrainingRequest>* PrepareAsyncStreamingTrainingRaw(::grpc::ClientContext* context, ::google::rpc::Status* response, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_PushData_;
    const ::grpc::internal::RpcMethod rpcmethod_StreamingTraining_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Push accture traning data to server
    virtual ::grpc::Status PushData(::grpc::ServerContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response);
    // Performs bidirectional streaming audio translation: receive results while
    // sending audio. This method is only available via the gRPC API (not REST).
    virtual ::grpc::Status StreamingTraining(::grpc::ServerContext* context, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* reader, ::google::rpc::Status* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_PushData() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPushData(::grpc::ServerContext* context, ::sagittarius::training::v1::TrainingData* request, ::grpc::ServerAsyncResponseWriter< ::google::rpc::Status>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_StreamingTraining : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_StreamingTraining() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_StreamingTraining() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingTraining(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* /*reader*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingTraining(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::google::rpc::Status, ::sagittarius::training::v1::StreamingTrainingRequest>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_PushData<WithAsyncMethod_StreamingTraining<Service > > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_PushData() {
      ::grpc::Service::experimental().MarkMethodCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::sagittarius::training::v1::TrainingData, ::google::rpc::Status>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::sagittarius::training::v1::TrainingData* request, ::google::rpc::Status* response) { return this->PushData(context, request, response); }));}
    void SetMessageAllocatorFor_PushData(
        ::grpc::experimental::MessageAllocator< ::sagittarius::training::v1::TrainingData, ::google::rpc::Status>* allocator) {
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::sagittarius::training::v1::TrainingData, ::google::rpc::Status>*>(
          ::grpc::Service::experimental().GetHandler(0))
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* PushData(::grpc::experimental::CallbackServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_StreamingTraining : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_StreamingTraining() {
      ::grpc::Service::experimental().MarkMethodCallback(1,
        new ::grpc_impl::internal::CallbackClientStreamingHandler< ::sagittarius::training::v1::StreamingTrainingRequest, ::google::rpc::Status>(
          [this](::grpc::experimental::CallbackServerContext* context, ::google::rpc::Status* response) { return this->StreamingTraining(context, response); }));
    }
    ~ExperimentalWithCallbackMethod_StreamingTraining() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingTraining(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* /*reader*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerReadReactor< ::sagittarius::training::v1::StreamingTrainingRequest>* StreamingTraining(::grpc::experimental::CallbackServerContext* /*context*/, ::google::rpc::Status* /*response*/) { return nullptr; }
  };
  typedef ExperimentalWithCallbackMethod_PushData<ExperimentalWithCallbackMethod_StreamingTraining<Service > > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_PushData() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_StreamingTraining : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_StreamingTraining() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_StreamingTraining() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingTraining(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* /*reader*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_PushData() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestPushData(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithRawMethod_StreamingTraining : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_StreamingTraining() {
      ::grpc::Service::MarkMethodRaw(1);
    }
    ~WithRawMethod_StreamingTraining() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingTraining(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* /*reader*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestStreamingTraining(::grpc::ServerContext* context, ::grpc::ServerAsyncReader< ::grpc::ByteBuffer, ::grpc::ByteBuffer>* reader, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncClientStreaming(1, context, reader, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_PushData() {
      ::grpc::Service::experimental().MarkMethodRawCallback(0,
        new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::experimental::CallbackServerContext* context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->PushData(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerUnaryReactor* PushData(::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_StreamingTraining : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_StreamingTraining() {
      ::grpc::Service::experimental().MarkMethodRawCallback(1,
        new ::grpc_impl::internal::CallbackClientStreamingHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
          [this](::grpc::experimental::CallbackServerContext* context, ::grpc::ByteBuffer* response) { return this->StreamingTraining(context, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_StreamingTraining() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status StreamingTraining(::grpc::ServerContext* /*context*/, ::grpc::ServerReader< ::sagittarius::training::v1::StreamingTrainingRequest>* /*reader*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    virtual ::grpc::experimental::ServerReadReactor< ::grpc::ByteBuffer>* StreamingTraining(::grpc::experimental::CallbackServerContext* /*context*/, ::grpc::ByteBuffer* /*response*/) { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_PushData : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_PushData() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::sagittarius::training::v1::TrainingData, ::google::rpc::Status>(std::bind(&WithStreamedUnaryMethod_PushData<BaseClass>::StreamedPushData, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_PushData() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status PushData(::grpc::ServerContext* /*context*/, const ::sagittarius::training::v1::TrainingData* /*request*/, ::google::rpc::Status* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedPushData(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::sagittarius::training::v1::TrainingData,::google::rpc::Status>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_PushData<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_PushData<Service > StreamedService;
};

}  // namespace v1
}  // namespace training
}  // namespace sagittarius


#endif  // GRPC_training_2fv1_2ftraining_2eproto__INCLUDED