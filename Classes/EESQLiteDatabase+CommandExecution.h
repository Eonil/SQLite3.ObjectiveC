//
//  EESQLiteDatabase+CommandExecution.h
//  EonilSQLite
//
//  Created by Hoon Hwangbo on 7/23/12.
//  Copyright (c) 2012 Eonil Company. All rights reserved.
//

#import				"EESQLiteSymbols.h"
#import				"EESQLiteDatabase.h"

@interface			EESQLiteDatabase (CommandExecution)
- (NSArray*)		arrayOfValuesByExecutingSQL:(NSString*)command											EESQLiteDeprecatedMethod;	
- (NSArray*)		arrayOfValuesByExecutingSQL:(NSString*)command replacingNullsWithValue:(id)nullValue	EESQLiteDeprecatedMethod;
- (NSArray*)		arrayOfRowsByExecutingSQL:(NSString*)command;										//	Array of `NSDictinary`. Replaces NULL column value as `nil`.
- (NSArray*)		arrayOfRowsByExecutingSQL:(NSString*)command replacingNullsWithValue:(id)replacementForNullValues;	//	Array of `NSDictinary`. If replacing value is `nil`, the the column value will be removed from dictionary.
- (BOOL)			enumerateRowsByExecutingSQL:(NSString*)command block:(void(^)(NSDictionary* row, BOOL* stop))block;											//	Replaces NULL column value as `nil`.
- (BOOL)			enumerateRowsByExecutingSQL:(NSString*)command replacingNullsWithValue:(id)replacementForNullValues block:(void(^)(NSDictionary* row, BOOL* stop))block;	//	If replacing value is `nil`, the the column value will be removed from dictionary.

@end
