/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.stream;

import com.facebook.thrift.client.*;
import java.util.*;

public class PubSubStreamingServiceBlockingReactiveWrapper 
    implements PubSubStreamingService.Reactive {
    private final PubSubStreamingService _delegate;

    public PubSubStreamingServiceBlockingReactiveWrapper(PubSubStreamingService _delegate) {
        
        this._delegate = _delegate;
    }

    @java.lang.Override
    public void dispose() {
        _delegate.close();
    }

    @java.lang.Override
    public reactor.core.publisher.Flux<Integer> returnstream(final int i32From, final int i32To) {
        throw new UnsupportedOperationException();
    }

    @java.lang.Override
    public reactor.core.publisher.Flux<Integer> streamthrows(final int foo) {
        throw new UnsupportedOperationException();
    }

    @java.lang.Override
    public reactor.core.publisher.Flux<Integer> boththrows(final int foo) {
        throw new UnsupportedOperationException();
    }

    @java.lang.Override
    public reactor.core.publisher.Flux<com.facebook.thrift.model.StreamResponse<Integer,Integer>> responseandstreamthrows(final int foo) {
        throw new UnsupportedOperationException();
    }

    @java.lang.Override
    public reactor.core.publisher.Flux<Integer> returnstreamFast(final int i32From, final int i32To) {
        throw new UnsupportedOperationException();
    }

}
