/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "DAMSBasicConsumer.h"
#import "DASyncActionsConsumer.h"


@interface DAMSUpdateConsumer : DAMSBasicConsumer <DASyncActionsConsumer> {
}
// inherited: -(BOOL)handleItems:(id)items;
// in a protocol: -(void)receiveSyncActions:(id)actions;
// in a protocol: -(void)commitSyncActions;
// in a protocol: -(void)handleResponse:(id)response error:(id)error;
@end
