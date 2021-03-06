/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWifiAwdlServiceRecord : PBCodable <NSCopying> {
    unsigned long long  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int opcode : 1; 
        unsigned int serviceId : 1; 
        unsigned int type : 1; 
    }  _has;
    unsigned int  _opcode;
    unsigned int  _serviceId;
    NSData * _serviceKey;
    unsigned int  _type;
}

@property (nonatomic) unsigned long long duration;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) BOOL hasOpcode;
@property (nonatomic) BOOL hasServiceId;
@property (nonatomic, readonly) BOOL hasServiceKey;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int opcode;
@property (nonatomic) unsigned int serviceId;
@property (nonatomic, retain) NSData *serviceKey;
@property (nonatomic) unsigned int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)duration;
- (BOOL)hasDuration;
- (BOOL)hasOpcode;
- (BOOL)hasServiceId;
- (BOOL)hasServiceKey;
- (BOOL)hasType;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)opcode;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)serviceId;
- (id)serviceKey;
- (void)setDuration:(unsigned long long)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasOpcode:(BOOL)arg1;
- (void)setHasServiceId:(BOOL)arg1;
- (void)setHasType:(BOOL)arg1;
- (void)setOpcode:(unsigned int)arg1;
- (void)setServiceId:(unsigned int)arg1;
- (void)setServiceKey:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (unsigned int)type;
- (void)writeTo:(id)arg1;

@end
