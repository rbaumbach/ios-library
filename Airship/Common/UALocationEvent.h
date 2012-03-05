/*
 Copyright 2009-2012 Urban Airship Inc. All rights reserved.
 
 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.
 
 2. Redistributions in binaryform must reproduce the above copyright notice,
 this list of conditions and the following disclaimer in the documentation
 and/or other materials provided withthe distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE URBAN AIRSHIP INC``AS IS'' AND ANY EXPRESS OR
 IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 EVENT SHALL URBAN AIRSHIP INC OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT,
 INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#import "UAEvent.h"
#import "UALocationServicesCommon.h"

/** Keys and values for location analytics */
typedef NSString UALocationEventAnalyticsKey;
extern UALocationEventAnalyticsKey * const UALocationEventSessionIDKey; 
extern UALocationEventAnalyticsKey * const UALocationEventForegroundKey; 
extern UALocationEventAnalyticsKey * const UALocationEventLatitudeKey;
extern UALocationEventAnalyticsKey * const UALocationEventLongitudeKey;
extern UALocationEventAnalyticsKey * const UALocationEventDesiredAccuracyKey;
extern UALocationEventAnalyticsKey * const UALocationEventUpdateTypeKey;
extern UALocationEventAnalyticsKey * const UALocationEventProviderKey;
extern UALocationEventAnalyticsKey * const UALocationEventDistanceFilterKey;
extern UALocationEventAnalyticsKey * const UALocationEventHorizontalAccuracyKey;
extern UALocationEventAnalyticsKey * const UALocationEventVerticalAccuracyKey;

typedef NSString UALocationEventUpdateType;
extern UALocationEventUpdateType * const UALocationEventAnalyticsType;
extern UALocationEventUpdateType * const UALocationEventUpdateTypeCHANGE;
extern UALocationEventUpdateType * const UALocationEventUpdateTypeCONTINUOUS;
extern UALocationEventUpdateType * const UALocationEventUpdateTypeSINGLE;
extern UALocationEventUpdateType * const UALocationEventUpdatetypeNONE;



@interface UALocationEvent : UAEvent


- (id)initWithLocationContext:(NSDictionary*)context;

- (id)initWithLocation:(CLLocation*)location 
              provider:(UALocationServiceProviderType*)provider 
       desiredAccuracy:(CLLocationAccuracy)desiredAccuracy 
     andDistanceFilter:(CLLocationDistance)distanceFilter;

+ (UALocationEvent*)locationEventWithContext:(NSDictionary*)context;
@end