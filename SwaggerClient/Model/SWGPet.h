#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Swagger Petstore
* This is a sample Petstore server.  You can find  out more about Swagger at  [http://swagger.io](http://swagger.io) or on  [irc.freenode.net, #swagger](http://swagger.io/irc/). 
*
* OpenAPI spec version: 1.0.0
* Contact: apiteam@swagger.io
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/


#import "SWGCategory.h"
#import "SWGTag.h"
@protocol SWGCategory;
@class SWGCategory;
@protocol SWGTag;
@class SWGTag;



@protocol SWGPet
@end

@interface SWGPet : SWGObject


@property(nonatomic) NSNumber* _id;

@property(nonatomic) SWGCategory* category;

@property(nonatomic) NSString* name;

@property(nonatomic) NSArray<NSString*>* photoUrls;

@property(nonatomic) NSArray<SWGTag>* tags;
/* pet status in the store [optional]
 */
@property(nonatomic) NSString* status;

@end
