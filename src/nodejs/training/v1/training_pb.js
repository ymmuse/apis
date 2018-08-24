/**
 * @fileoverview
 * @enhanceable
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!

var jspb = require('google-protobuf');
var goog = jspb;
var global = Function('return this')();

var google_api_annotations_pb = require('../../google/api/annotations_pb.js');
var google_rpc_status_pb = require('../../google/rpc/status_pb.js');
var google_cloud_speech_v1_cloud_speech_pb = require('../../google/cloud/speech/v1/cloud_speech_pb.js');
goog.exportSymbol('proto.sagittarius.training.v1.StreamingTrainingRequest', null, global);
goog.exportSymbol('proto.sagittarius.training.v1.TrainingData', null, global);

/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.sagittarius.training.v1.TrainingData = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.sagittarius.training.v1.TrainingData.oneofGroups_);
};
goog.inherits(proto.sagittarius.training.v1.TrainingData, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.sagittarius.training.v1.TrainingData.displayName = 'proto.sagittarius.training.v1.TrainingData';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.sagittarius.training.v1.TrainingData.oneofGroups_ = [[3,7]];

/**
 * @enum {number}
 */
proto.sagittarius.training.v1.TrainingData.DataCase = {
  DATA_NOT_SET: 0,
  TRANSCRIPT_IDENTITY: 3,
  PAYLOAD: 7
};

/**
 * @return {proto.sagittarius.training.v1.TrainingData.DataCase}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getDataCase = function() {
  return /** @type {proto.sagittarius.training.v1.TrainingData.DataCase} */(jspb.Message.computeOneofCase(this, proto.sagittarius.training.v1.TrainingData.oneofGroups_[0]));
};



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.sagittarius.training.v1.TrainingData.prototype.toObject = function(opt_includeInstance) {
  return proto.sagittarius.training.v1.TrainingData.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.sagittarius.training.v1.TrainingData} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sagittarius.training.v1.TrainingData.toObject = function(includeInstance, msg) {
  var f, obj = {
    mediaIdentity: jspb.Message.getFieldWithDefault(msg, 1, ""),
    languageCode: jspb.Message.getFieldWithDefault(msg, 2, ""),
    format: jspb.Message.getFieldWithDefault(msg, 4, ""),
    playedTime: +jspb.Message.getFieldWithDefault(msg, 5, 0.0),
    totalTime: +jspb.Message.getFieldWithDefault(msg, 6, 0.0),
    transcriptIdentity: jspb.Message.getFieldWithDefault(msg, 3, ""),
    payload: msg.getPayload_asB64()
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.sagittarius.training.v1.TrainingData}
 */
proto.sagittarius.training.v1.TrainingData.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.sagittarius.training.v1.TrainingData;
  return proto.sagittarius.training.v1.TrainingData.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.sagittarius.training.v1.TrainingData} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.sagittarius.training.v1.TrainingData}
 */
proto.sagittarius.training.v1.TrainingData.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setMediaIdentity(value);
      break;
    case 2:
      var value = /** @type {string} */ (reader.readString());
      msg.setLanguageCode(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setFormat(value);
      break;
    case 5:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setPlayedTime(value);
      break;
    case 6:
      var value = /** @type {number} */ (reader.readDouble());
      msg.setTotalTime(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setTranscriptIdentity(value);
      break;
    case 7:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setPayload(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.sagittarius.training.v1.TrainingData.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.sagittarius.training.v1.TrainingData.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.sagittarius.training.v1.TrainingData} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sagittarius.training.v1.TrainingData.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getMediaIdentity();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getLanguageCode();
  if (f.length > 0) {
    writer.writeString(
      2,
      f
    );
  }
  f = message.getFormat();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
  f = message.getPlayedTime();
  if (f !== 0.0) {
    writer.writeDouble(
      5,
      f
    );
  }
  f = message.getTotalTime();
  if (f !== 0.0) {
    writer.writeDouble(
      6,
      f
    );
  }
  f = /** @type {string} */ (jspb.Message.getField(message, 3));
  if (f != null) {
    writer.writeString(
      3,
      f
    );
  }
  f = /** @type {!(string|Uint8Array)} */ (jspb.Message.getField(message, 7));
  if (f != null) {
    writer.writeBytes(
      7,
      f
    );
  }
};


/**
 * optional string media_identity = 1;
 * @return {string}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getMediaIdentity = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.TrainingData.prototype.setMediaIdentity = function(value) {
  jspb.Message.setField(this, 1, value);
};


/**
 * optional string language_code = 2;
 * @return {string}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getLanguageCode = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.TrainingData.prototype.setLanguageCode = function(value) {
  jspb.Message.setField(this, 2, value);
};


/**
 * optional string format = 4;
 * @return {string}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getFormat = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.TrainingData.prototype.setFormat = function(value) {
  jspb.Message.setField(this, 4, value);
};


/**
 * optional double played_time = 5;
 * @return {number}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getPlayedTime = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 5, 0.0));
};


/** @param {number} value */
proto.sagittarius.training.v1.TrainingData.prototype.setPlayedTime = function(value) {
  jspb.Message.setField(this, 5, value);
};


/**
 * optional double total_time = 6;
 * @return {number}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getTotalTime = function() {
  return /** @type {number} */ (+jspb.Message.getFieldWithDefault(this, 6, 0.0));
};


/** @param {number} value */
proto.sagittarius.training.v1.TrainingData.prototype.setTotalTime = function(value) {
  jspb.Message.setField(this, 6, value);
};


/**
 * optional string transcript_identity = 3;
 * @return {string}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getTranscriptIdentity = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.TrainingData.prototype.setTranscriptIdentity = function(value) {
  jspb.Message.setOneofField(this, 3, proto.sagittarius.training.v1.TrainingData.oneofGroups_[0], value);
};


proto.sagittarius.training.v1.TrainingData.prototype.clearTranscriptIdentity = function() {
  jspb.Message.setOneofField(this, 3, proto.sagittarius.training.v1.TrainingData.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.sagittarius.training.v1.TrainingData.prototype.hasTranscriptIdentity = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional bytes payload = 7;
 * @return {!(string|Uint8Array)}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getPayload = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 7, ""));
};


/**
 * optional bytes payload = 7;
 * This is a type-conversion wrapper around `getPayload()`
 * @return {string}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getPayload_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getPayload()));
};


/**
 * optional bytes payload = 7;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getPayload()`
 * @return {!Uint8Array}
 */
proto.sagittarius.training.v1.TrainingData.prototype.getPayload_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getPayload()));
};


/** @param {!(string|Uint8Array)} value */
proto.sagittarius.training.v1.TrainingData.prototype.setPayload = function(value) {
  jspb.Message.setOneofField(this, 7, proto.sagittarius.training.v1.TrainingData.oneofGroups_[0], value);
};


proto.sagittarius.training.v1.TrainingData.prototype.clearPayload = function() {
  jspb.Message.setOneofField(this, 7, proto.sagittarius.training.v1.TrainingData.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.sagittarius.training.v1.TrainingData.prototype.hasPayload = function() {
  return jspb.Message.getField(this, 7) != null;
};



/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.sagittarius.training.v1.StreamingTrainingRequest = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_);
};
goog.inherits(proto.sagittarius.training.v1.StreamingTrainingRequest, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  proto.sagittarius.training.v1.StreamingTrainingRequest.displayName = 'proto.sagittarius.training.v1.StreamingTrainingRequest';
}
/**
 * Oneof group definitions for this message. Each group defines the field
 * numbers belonging to that group. When of these fields' value is set, all
 * other fields in the group are cleared. During deserialization, if multiple
 * fields are encountered for a group, only the last value seen will be kept.
 * @private {!Array<!Array<number>>}
 * @const
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_ = [[1,2]];

/**
 * @enum {number}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.StreamingRequestCase = {
  STREAMING_REQUEST_NOT_SET: 0,
  STREAMING_CONFIG: 1,
  AUDIO_CONTENT: 2
};

/**
 * @return {proto.sagittarius.training.v1.StreamingTrainingRequest.StreamingRequestCase}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getStreamingRequestCase = function() {
  return /** @type {proto.sagittarius.training.v1.StreamingTrainingRequest.StreamingRequestCase} */(jspb.Message.computeOneofCase(this, proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_[0]));
};



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto suitable for use in Soy templates.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     com.google.apps.jspb.JsClassTemplate.JS_RESERVED_WORDS.
 * @param {boolean=} opt_includeInstance Whether to include the JSPB instance
 *     for transitional soy proto support: http://goto/soy-param-migration
 * @return {!Object}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.toObject = function(opt_includeInstance) {
  return proto.sagittarius.training.v1.StreamingTrainingRequest.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Whether to include the JSPB
 *     instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.sagittarius.training.v1.StreamingTrainingRequest} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.toObject = function(includeInstance, msg) {
  var f, obj = {
    streamingConfig: (f = msg.getStreamingConfig()) && google_cloud_speech_v1_cloud_speech_pb.RecognitionConfig.toObject(includeInstance, f),
    audioContent: msg.getAudioContent_asB64(),
    transcript: jspb.Message.getFieldWithDefault(msg, 3, ""),
    mediaIdentity: jspb.Message.getFieldWithDefault(msg, 4, "")
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.sagittarius.training.v1.StreamingTrainingRequest}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.sagittarius.training.v1.StreamingTrainingRequest;
  return proto.sagittarius.training.v1.StreamingTrainingRequest.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.sagittarius.training.v1.StreamingTrainingRequest} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.sagittarius.training.v1.StreamingTrainingRequest}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new google_cloud_speech_v1_cloud_speech_pb.RecognitionConfig;
      reader.readMessage(value,google_cloud_speech_v1_cloud_speech_pb.RecognitionConfig.deserializeBinaryFromReader);
      msg.setStreamingConfig(value);
      break;
    case 2:
      var value = /** @type {!Uint8Array} */ (reader.readBytes());
      msg.setAudioContent(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setTranscript(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setMediaIdentity(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.sagittarius.training.v1.StreamingTrainingRequest.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.sagittarius.training.v1.StreamingTrainingRequest} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getStreamingConfig();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      google_cloud_speech_v1_cloud_speech_pb.RecognitionConfig.serializeBinaryToWriter
    );
  }
  f = /** @type {!(string|Uint8Array)} */ (jspb.Message.getField(message, 2));
  if (f != null) {
    writer.writeBytes(
      2,
      f
    );
  }
  f = message.getTranscript();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
  f = message.getMediaIdentity();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
};


/**
 * optional google.cloud.speech.v1.RecognitionConfig streaming_config = 1;
 * @return {?proto.google.cloud.speech.v1.RecognitionConfig}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getStreamingConfig = function() {
  return /** @type{?proto.google.cloud.speech.v1.RecognitionConfig} */ (
    jspb.Message.getWrapperField(this, google_cloud_speech_v1_cloud_speech_pb.RecognitionConfig, 1));
};


/** @param {?proto.google.cloud.speech.v1.RecognitionConfig|undefined} value */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.setStreamingConfig = function(value) {
  jspb.Message.setOneofWrapperField(this, 1, proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_[0], value);
};


proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.clearStreamingConfig = function() {
  this.setStreamingConfig(undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.hasStreamingConfig = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional bytes audio_content = 2;
 * @return {!(string|Uint8Array)}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getAudioContent = function() {
  return /** @type {!(string|Uint8Array)} */ (jspb.Message.getFieldWithDefault(this, 2, ""));
};


/**
 * optional bytes audio_content = 2;
 * This is a type-conversion wrapper around `getAudioContent()`
 * @return {string}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getAudioContent_asB64 = function() {
  return /** @type {string} */ (jspb.Message.bytesAsB64(
      this.getAudioContent()));
};


/**
 * optional bytes audio_content = 2;
 * Note that Uint8Array is not supported on all browsers.
 * @see http://caniuse.com/Uint8Array
 * This is a type-conversion wrapper around `getAudioContent()`
 * @return {!Uint8Array}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getAudioContent_asU8 = function() {
  return /** @type {!Uint8Array} */ (jspb.Message.bytesAsU8(
      this.getAudioContent()));
};


/** @param {!(string|Uint8Array)} value */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.setAudioContent = function(value) {
  jspb.Message.setOneofField(this, 2, proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_[0], value);
};


proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.clearAudioContent = function() {
  jspb.Message.setOneofField(this, 2, proto.sagittarius.training.v1.StreamingTrainingRequest.oneofGroups_[0], undefined);
};


/**
 * Returns whether this field is set.
 * @return {!boolean}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.hasAudioContent = function() {
  return jspb.Message.getField(this, 2) != null;
};


/**
 * optional string transcript = 3;
 * @return {string}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getTranscript = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.setTranscript = function(value) {
  jspb.Message.setField(this, 3, value);
};


/**
 * optional string media_identity = 4;
 * @return {string}
 */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.getMediaIdentity = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/** @param {string} value */
proto.sagittarius.training.v1.StreamingTrainingRequest.prototype.setMediaIdentity = function(value) {
  jspb.Message.setField(this, 4, value);
};


goog.object.extend(exports, proto.sagittarius.training.v1);
