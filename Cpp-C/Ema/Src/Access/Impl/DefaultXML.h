/*|-----------------------------------------------------------------------------
 *|            This source code is provided under the Apache 2.0 license      --
 *|  and is provided AS IS with no warranty or guarantee of fit for purpose.  --
 *|                See the project's LICENSE.md for details.                  --
 *|          Copyright (C) 2019-2020 Refinitiv. All rights reserved.          --
 *|-----------------------------------------------------------------------------
 */

#ifndef __thomsonreuters_ema_access_DefaultXML_h
#define __thomsonreuters_ema_access_DefaultXML_h

#include "EmaString.h"

thomsonreuters::ema::access::EmaString AsciiValues[] = {
	"CapabilitiesEntry",
	"Channel",
	"ChannelSet",
	"CipherSuite",
	"DefaultConsumer",
	"DefaultDictionary",
	"DefaultDirectory",
	"DefaultIProvider",
	"DefaultNiProvider",
	"DhParams",
	"DictionariesProvidedEntry",
	"DictionariesUsedEntry",
	"Dictionary",
	"Directory",
	"EnumTypeDefFileName",
	"EnumTypeDefItemName",
	"FileName",
	"Host",
	"HsmInterface",
	"HsmMultAddress",
	"HsmPort",
	"InterfaceName",
	"ItemList",
	"Location",
	"Logger",
	"LibsslName",
	"LibcryptoName",
	"LibcurlName",
	"Name",
	"ObjectName",
	"OpenSSLCAStore",
	"Port",
	"ProxyHost",
	"ProxyPort",
	"Rate",
	"RdmFieldDictionaryFileName",
	"RdmFieldDictionaryItemName",
	"RecvAddress",
	"RecvPort",
	"SendAddress",
	"SendPort",
	"Server",
	"ServerCert",
	"ServerPrivateKey",
	"StatusText",
	"tcpControlPort",
	"Timeliness",
	"UnicastPort",
	"Vendor",
	"XmlTraceFileName",
	"WsProtocols",
};

thomsonreuters::ema::access::EmaString EnumeratedValues[] = {
	"ChannelType",
	"CompressionType",
	"EncryptedProtocolType",
	"DataState",
	"DictionaryType",
	"LoggerSeverity",
	"LoggerType",
	"ServerType",
	"StatusCode",
	"StreamState",
};

thomsonreuters::ema::access::EmaString Int64Values[] = {
	"DictionaryID",
	"DispatchTimeoutApiThread",
	"PipePort",
	"ReconnectAttemptLimit",
	"ReconnectMaxDelay",
	"ReconnectMinDelay",
	"ReissueTokenAttemptLimit",
	"ReissueTokenAttemptInterval",
	"XmlTraceMaxFileSize",
	"MaxEventsInPool",
};

thomsonreuters::ema::access::EmaString UInt64Values[] = {
	"AcceptDirMessageWithoutMinFilters",
	"AcceptingConsumerStatus",
	"AcceptingRequests",
	"AcceptMessageSameKeyButDiffStream",
	"AcceptMessageThatChangesService",
	"AcceptMessageWithoutAcceptingRequests",
	"AcceptMessageWithoutBeingLogin",
	"AcceptMessageWithoutQosInRange",
	"CatchUnhandledException",
	"CatchUnknownJsonFids",
	"CatchUnknownJsonKeys",
	"CompressionThreshold",
	"CloseChannelFromConverterFailure",
	"ConnectionMinPingTimeout",
	"ConnectionPingTimeout",
	"DefaultServiceID",
	"DictionaryRequestTimeOut",
	"DirectoryRequestTimeOut",
	"DisconnectOnGap",
	"EnableSessionManagement",
	"EnumTypeFragmentSize",
	"FieldDictionaryFragmentSize",
	"GuaranteedOutputBuffers",
	"HighWaterMark",
	"HsmInterval",
	"IncludeDateInLoggerOutput",
	"InitializationTimeout",
	"ItemCountHint",
	"IsSource",
	"JsonExpandedEnumFields",
	"LoginRequestTimeOut",
	"MaxDispatchCountApiThread",
	"MaxDispatchCountUserThread",
	"MaxOutstandingPosts",
	"MergeSourceDirectoryStreams",
	"MsgKeyInUpdates",
	"NumInputBuffers",
	"ObeyOpenWindow",
	"OutputBufferSize",
	"PacketTTL",
	"PostAckTimeout",
	"RecoverUserSubmitSourceDirectory",
	"RefreshFirstRequired",
	"RemoveItemsOnDisconnect",
	"RequestTimeout",
	"RestRequestTimeOut",
	"ServiceCountHint",
	"ServiceId",
	"ServiceState",
	"SupportsOutOfBandSnapshots",
	"SupportsQoSRange",
	"SysRecvBufSize",
	"SysSendBufSize",
	"SecurityProtocol",
	"TcpNodelay",
	"XmlTraceHex",
	"XmlTracePing",
	"XmlTraceRead",
	"XmlTraceToFile",
	"XmlTraceToMultipleFiles",
	"XmlTraceToStdout",
	"XmlTraceWrite",
	"XmlTraceDump",
	"ndata",
	"nmissing",
	"nrreq",
	"pktPoolLimitHigh",
	"pktPoolLimitLow",
	"tbchold",
	"tdata",
	"tpphold",
	"trreq",
	"twait",
	"userQLimit",
	"WsMaxMsgSize",
	"MaxFragmentSize",
};

thomsonreuters::ema::access::EmaString DoubleValues[] = {
	"TokenReissueRatio",
};

thomsonreuters::ema::access::EmaString NodesThatRequireName[] = {
	"Channel",
	"Consumer",
	"Dictionary",
	"Directory",
	"IProvider"
	"Logger"
	"NiProvider",
	"Server",
	"Service",
};

#endif //__thomsonreuters_ema_access_DefaultXML_h
