//
//  NSUserActivity+CLSDeepLinks.h
//  ClassKit
//
//  Copyright © 2018 Apple Inc. All rights reserved.
//

#import <ClassKit/CLSDefines.h>
#import <Foundation/NSUserActivity.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSUserActivity (CLSDeepLinks)

/*!
 @abstract      Returns whether the user activity is a ClassKit deep link.
 */
@property (nonatomic, assign, readonly) BOOL isClassKitDeepLink API_AVAILABLE(ios(11.3)) API_UNAVAILABLE(macos, watchos, tvos);

/*!
 @abstract      Returns the context identifier path you should deep link to.
 @discussion    For example for the context identifier path @c @["swift-programming-book", @c "chapter1"],
                your app should direct the user to @em chapter1 in @em swift-programming-book.
 */
@property (nullable, nonatomic, strong, readonly) NSArray<NSString *> *contextIdentifierPath API_AVAILABLE(ios(11.3)) API_UNAVAILABLE(macos, watchos, tvos);

@end

NS_ASSUME_NONNULL_END
