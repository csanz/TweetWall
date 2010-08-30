//
//  TweetElement.h
//  TweetWall
//
//  Created by Xavier Damman on 8/29/10.
//  Copyright 2010 Kwenti inc. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface TweetElement : NSObject {
	NSString	*screenName;
	NSURL		*avatar;
	NSString	*content;
	NSString	*type;
	NSURL		*permalink;
	NSDate		*timestamp;
	NSURL		*image;
	NSURL		*thumbnail;
	NSDictionary *user;
	float		id;
}

- (id) initWithDictionary:(NSDictionary *)tweetData;
- (void) getUserInfoThread;

@property (nonatomic,retain) NSString *screenName;
@property (nonatomic,retain) NSDictionary *user;
@property (nonatomic,retain) NSString *content;
@property (nonatomic,retain) NSString *type;
@property (nonatomic,retain) NSURL *permalink;
@property (nonatomic,retain) NSURL *avatar;
@property (nonatomic,retain) NSDate *timestamp;
@property (nonatomic,retain) NSURL *image;
@property (nonatomic,retain) NSURL *thumbnail;

@end