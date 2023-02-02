/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: google/type/money.proto */

#ifndef PROTOBUF_C_google_2ftype_2fmoney_2eproto__INCLUDED
#define PROTOBUF_C_google_2ftype_2fmoney_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1003000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1003003 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Google__Type__Money Google__Type__Money;


/* --- enums --- */


/* --- messages --- */

/*
 * Represents an amount of money with its currency type.
 */
struct  _Google__Type__Money
{
  ProtobufCMessage base;
  /*
   * The three-letter currency code defined in ISO 4217.
   */
  char *currency_code;
  /*
   * The whole units of the amount.
   * For example if `currencyCode` is `"USD"`, then 1 unit is one US dollar.
   */
  int64_t units;
  /*
   * Number of nano (10^-9) units of the amount.
   * The value must be between -999,999,999 and +999,999,999 inclusive.
   * If `units` is positive, `nanos` must be positive or zero.
   * If `units` is zero, `nanos` can be positive, zero, or negative.
   * If `units` is negative, `nanos` must be negative or zero.
   * For example $-1.75 is represented as `units`=-1 and `nanos`=-750,000,000.
   */
  int32_t nanos;
};
#define GOOGLE__TYPE__MONEY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&google__type__money__descriptor) \
    , (char *)protobuf_c_empty_string, 0, 0 }


/* Google__Type__Money methods */
void   google__type__money__init
                     (Google__Type__Money         *message);
size_t google__type__money__get_packed_size
                     (const Google__Type__Money   *message);
size_t google__type__money__pack
                     (const Google__Type__Money   *message,
                      uint8_t             *out);
size_t google__type__money__pack_to_buffer
                     (const Google__Type__Money   *message,
                      ProtobufCBuffer     *buffer);
Google__Type__Money *
       google__type__money__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   google__type__money__free_unpacked
                     (Google__Type__Money *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Google__Type__Money_Closure)
                 (const Google__Type__Money *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor google__type__money__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_google_2ftype_2fmoney_2eproto__INCLUDED */
