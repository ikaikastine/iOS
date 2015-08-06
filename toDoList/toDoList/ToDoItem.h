//
//  ToDoItem.h
//  toDoList
//
//  Created by Kevin Stine on 6/16/15.
//  Copyright (c) 2015 Kevin Stine. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
