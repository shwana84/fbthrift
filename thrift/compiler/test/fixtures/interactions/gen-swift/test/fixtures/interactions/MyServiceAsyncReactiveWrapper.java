/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.interactions;

import com.facebook.thrift.client.*;
import java.util.*;

public class MyServiceAsyncReactiveWrapper 
    implements MyService.Reactive {
    private final MyService.Async _delegate;

    public MyServiceAsyncReactiveWrapper(MyService.Async _delegate) {
        
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Mono<Void> foo() {
        return com.facebook.thrift.util.FutureUtil.toMono(_delegate.foo());
    }

    public class MyInteractionImpl implements MyInteraction {
        public reactor.core.publisher.Mono<Integer> frobnicate() throws org.apache.thrift.TException {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Integer> frobnicate(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<ResponseWrapper<Integer>> frobnicateWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Void> ping() throws org.apache.thrift.TException {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Void> ping(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<ResponseWrapper<Void>> pingWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        @java.lang.Override
        public void dispose() {}
    }

    public MyInteraction createMyInteraction() {
        return new MyInteractionImpl();
    }

    public class MyInteractionFastImpl implements MyInteractionFast {
        public reactor.core.publisher.Mono<Integer> frobnicate() throws org.apache.thrift.TException {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Integer> frobnicate(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<ResponseWrapper<Integer>> frobnicateWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Void> ping() throws org.apache.thrift.TException {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Void> ping(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<ResponseWrapper<Void>> pingWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        @java.lang.Override
        public void dispose() {}
    }

    public MyInteractionFast createMyInteractionFast() {
        return new MyInteractionFastImpl();
    }

    public class SerialInteractionImpl implements SerialInteraction {
        public reactor.core.publisher.Mono<Void> frobnicate() throws org.apache.thrift.TException {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<Void> frobnicate(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        public reactor.core.publisher.Mono<ResponseWrapper<Void>> frobnicateWrapper(RpcOptions rpcOptions) {
            throw new UnsupportedOperationException("Interactions are not yet supported on AsyncReactiveWrapper Interfaces!");
        }

        @java.lang.Override
        public void dispose() {}
    }

    public SerialInteraction createSerialInteraction() {
        return new SerialInteractionImpl();
    }
}
