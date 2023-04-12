// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: carla.proto

#include "carla.pb.h"
#include "carla.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace carla {

static const char* CarlaAdapter_method_names[] = {
    "/carla.CarlaAdapter/ExecuteOneTimeStep",
    "/carla.CarlaAdapter/Finish",
    "/carla.CarlaAdapter/GetManagedActorsIds",
    "/carla.CarlaAdapter/GetManagedActorById",
    "/carla.CarlaAdapter/InsertVehicle",
    "/carla.CarlaAdapter/GetRandomSpawnPoint",
};

std::unique_ptr<CarlaAdapter::Stub> CarlaAdapter::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
{
    (void)options;
    std::unique_ptr<CarlaAdapter::Stub> stub(new CarlaAdapter::Stub(channel, options));
    return stub;
}

CarlaAdapter::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
    : channel_(channel)
    , rpcmethod_ExecuteOneTimeStep_(CarlaAdapter_method_names[0], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
    , rpcmethod_Finish_(CarlaAdapter_method_names[1], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
    , rpcmethod_GetManagedActorsIds_(CarlaAdapter_method_names[2], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
    , rpcmethod_GetManagedActorById_(CarlaAdapter_method_names[3], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
    , rpcmethod_InsertVehicle_(CarlaAdapter_method_names[4], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
    , rpcmethod_GetRandomSpawnPoint_(CarlaAdapter_method_names[5], options.suffix_for_stats(), ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
{}

::grpc::Status CarlaAdapter::Stub::ExecuteOneTimeStep(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::google::protobuf::Empty* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_ExecuteOneTimeStep_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::ExecuteOneTimeStep(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ExecuteOneTimeStep_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::ExecuteOneTimeStep(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_ExecuteOneTimeStep_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* CarlaAdapter::Stub::PrepareAsyncExecuteOneTimeStepRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_ExecuteOneTimeStep_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* CarlaAdapter::Stub::AsyncExecuteOneTimeStepRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncExecuteOneTimeStepRaw(context, request, cq);
    result->StartCall();
    return result;
}

::grpc::Status CarlaAdapter::Stub::Finish(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::google::protobuf::Empty* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_Finish_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::Finish(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Finish_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::Finish(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_Finish_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* CarlaAdapter::Stub::PrepareAsyncFinishRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_Finish_, context, request);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* CarlaAdapter::Stub::AsyncFinishRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncFinishRaw(context, request, cq);
    result->StartCall();
    return result;
}

::grpc::Status CarlaAdapter::Stub::GetManagedActorsIds(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::carla::ActorIds* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::carla::ActorIds, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetManagedActorsIds_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::GetManagedActorsIds(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::carla::ActorIds* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::carla::ActorIds, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetManagedActorsIds_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::GetManagedActorsIds(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::carla::ActorIds* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetManagedActorsIds_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::carla::ActorIds>* CarlaAdapter::Stub::PrepareAsyncGetManagedActorsIdsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::carla::ActorIds, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetManagedActorsIds_, context, request);
}

::grpc::ClientAsyncResponseReader< ::carla::ActorIds>* CarlaAdapter::Stub::AsyncGetManagedActorsIdsRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncGetManagedActorsIdsRaw(context, request, cq);
    result->StartCall();
    return result;
}

::grpc::Status CarlaAdapter::Stub::GetManagedActorById(::grpc::ClientContext* context, const ::carla::Number& request, ::carla::Vehicle* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::carla::Number, ::carla::Vehicle, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetManagedActorById_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::GetManagedActorById(::grpc::ClientContext* context, const ::carla::Number* request, ::carla::Vehicle* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::carla::Number, ::carla::Vehicle, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetManagedActorById_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::GetManagedActorById(::grpc::ClientContext* context, const ::carla::Number* request, ::carla::Vehicle* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetManagedActorById_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::carla::Vehicle>* CarlaAdapter::Stub::PrepareAsyncGetManagedActorByIdRaw(::grpc::ClientContext* context, const ::carla::Number& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::carla::Vehicle, ::carla::Number, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetManagedActorById_, context, request);
}

::grpc::ClientAsyncResponseReader< ::carla::Vehicle>* CarlaAdapter::Stub::AsyncGetManagedActorByIdRaw(::grpc::ClientContext* context, const ::carla::Number& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncGetManagedActorByIdRaw(context, request, cq);
    result->StartCall();
    return result;
}

::grpc::Status CarlaAdapter::Stub::InsertVehicle(::grpc::ClientContext* context, const ::carla::Vehicle& request, ::carla::Number* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::carla::Vehicle, ::carla::Number, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_InsertVehicle_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::InsertVehicle(::grpc::ClientContext* context, const ::carla::Vehicle* request, ::carla::Number* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::carla::Vehicle, ::carla::Number, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_InsertVehicle_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::InsertVehicle(::grpc::ClientContext* context, const ::carla::Vehicle* request, ::carla::Number* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_InsertVehicle_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::carla::Number>* CarlaAdapter::Stub::PrepareAsyncInsertVehicleRaw(::grpc::ClientContext* context, const ::carla::Vehicle& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::carla::Number, ::carla::Vehicle, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_InsertVehicle_, context, request);
}

::grpc::ClientAsyncResponseReader< ::carla::Number>* CarlaAdapter::Stub::AsyncInsertVehicleRaw(::grpc::ClientContext* context, const ::carla::Vehicle& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncInsertVehicleRaw(context, request, cq);
    result->StartCall();
    return result;
}

::grpc::Status CarlaAdapter::Stub::GetRandomSpawnPoint(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::carla::Transform* response)
{
    return ::grpc::internal::BlockingUnaryCall< ::google::protobuf::Empty, ::carla::Transform, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_GetRandomSpawnPoint_, context, request, response);
}

void CarlaAdapter::Stub::experimental_async::GetRandomSpawnPoint(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::carla::Transform* response, std::function<void(::grpc::Status)> f)
{
    ::grpc::internal::CallbackUnaryCall< ::google::protobuf::Empty, ::carla::Transform, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetRandomSpawnPoint_, context, request, response, std::move(f));
}

void CarlaAdapter::Stub::experimental_async::GetRandomSpawnPoint(::grpc::ClientContext* context, const ::google::protobuf::Empty* request, ::carla::Transform* response, ::grpc::experimental::ClientUnaryReactor* reactor)
{
    ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_GetRandomSpawnPoint_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::carla::Transform>* CarlaAdapter::Stub::PrepareAsyncGetRandomSpawnPointRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::carla::Transform, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_GetRandomSpawnPoint_, context, request);
}

::grpc::ClientAsyncResponseReader< ::carla::Transform>* CarlaAdapter::Stub::AsyncGetRandomSpawnPointRaw(::grpc::ClientContext* context, const ::google::protobuf::Empty& request, ::grpc::CompletionQueue* cq)
{
    auto* result =
        this->PrepareAsyncGetRandomSpawnPointRaw(context, request, cq);
    result->StartCall();
    return result;
}

CarlaAdapter::Service::Service()
{
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[0],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::google::protobuf::Empty* req,
                ::google::protobuf::Empty* resp) {
            return service->ExecuteOneTimeStep(ctx, req, resp);
        }, this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[1],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::google::protobuf::Empty, ::google::protobuf::Empty, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::google::protobuf::Empty* req,
                ::google::protobuf::Empty* resp) {
            return service->Finish(ctx, req, resp);
        }, this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[2],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::google::protobuf::Empty, ::carla::ActorIds, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::google::protobuf::Empty* req,
                ::carla::ActorIds* resp) {
            return service->GetManagedActorsIds(ctx, req, resp);
        }, this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[3],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::carla::Number, ::carla::Vehicle, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::carla::Number* req,
                ::carla::Vehicle* resp) {
            return service->GetManagedActorById(ctx, req, resp);
        }, this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[4],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::carla::Vehicle, ::carla::Number, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::carla::Vehicle* req,
                ::carla::Number* resp) {
            return service->InsertVehicle(ctx, req, resp);
        }, this)));
    AddMethod(new ::grpc::internal::RpcServiceMethod(
            CarlaAdapter_method_names[5],
            ::grpc::internal::RpcMethod::NORMAL_RPC,
            new ::grpc::internal::RpcMethodHandler<CarlaAdapter::Service, ::google::protobuf::Empty, ::carla::Transform, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
                [](CarlaAdapter::Service* service,
                ::grpc::ServerContext* ctx,
                const ::google::protobuf::Empty* req,
                ::carla::Transform* resp) {
            return service->GetRandomSpawnPoint(ctx, req, resp);
        }, this)));
}

CarlaAdapter::Service::~Service()
{
}

::grpc::Status CarlaAdapter::Service::ExecuteOneTimeStep(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CarlaAdapter::Service::Finish(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CarlaAdapter::Service::GetManagedActorsIds(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::carla::ActorIds* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CarlaAdapter::Service::GetManagedActorById(::grpc::ServerContext* context, const ::carla::Number* request, ::carla::Vehicle* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CarlaAdapter::Service::InsertVehicle(::grpc::ServerContext* context, const ::carla::Vehicle* request, ::carla::Number* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status CarlaAdapter::Service::GetRandomSpawnPoint(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::carla::Transform* response)
{
    (void) context;
    (void) request;
    (void) response;
    return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace carla

