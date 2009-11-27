/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import "ASChangedCollectionLeaf.h"

@class NSArray, ASMeetingRequest, NSDate, NSString, NSData;

@interface ASEmailItem : ASChangedCollectionLeaf {
	NSString* _to;
	NSString* _cc;
	NSString* _from;
	NSString* _replyTo;
	NSDate* _date;
	NSString* _subject;
	NSString* _displayTo;
	int _importance;
	BOOL _read;
	NSString* _body;
	int _bodySize;
	BOOL _bodyTruncated;
	NSString* _messageClass;
	NSArray* _attachments;
	ASMeetingRequest* _meetingRequest;
	NSString* _threadTopic;
	NSString* _mimeData;
	NSString* _folderId;
	NSString* _longID;
	int _bodyType;
	BOOL _readIsSet;
}
@property(retain) NSString* to;
@property(retain) NSString* cc;
@property(retain) NSString* from;
@property(retain) NSString* replyTo;
@property(retain) NSDate* date;
@property(retain) NSString* subject;
@property(retain) NSString* displayTo;
@property(assign) int importance;
@property(assign) BOOL read;
@property(retain) NSString* body;
@property(assign) int bodySize;
@property(assign) BOOL bodyTruncated;
@property(retain) NSString* messageClass;
@property(retain) NSArray* attachments;
@property(retain) NSString* threadTopic;
@property(retain) NSString* mimeData;
@property(retain) NSString* folderId;
@property(retain) NSString* longID;
@property(assign) int bodyType;
@property(readonly, retain) NSData* meetingRequestMetaData;
@property(readonly, retain) NSString* meetingRequestUUID;
// inherited: +(BOOL)acceptsTopLevelLeaves;
// inherited: +(BOOL)parsingLeafNode;
// inherited: +(BOOL)parsingWithSubItems;
// inherited: +(BOOL)frontingBasicTypes;
-(id)initWithServerID:(id)serverID from:(id)from to:(id)to body:(id)body subject:(id)subject date:(id)date isRead:(BOOL)read;
// inherited: -(id)asParseRules;
-(void)_processApplicationData:(BOOL)data;
-(void)processAppDataForStream;
-(void)postProcessApplicationData;
-(BOOL)_isSearchResult;
// inherited: -(void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;
// inherited: -(id)description;
-(int)compare:(id)compare;
// inherited: -(void)dealloc;
-(BOOL)containsOnlyFlagAttributes;
-(void)_setMeetingRequest:(id)request;
@end
