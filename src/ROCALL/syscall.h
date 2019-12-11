/*******************************************************************************
*
*  (C) COPYRIGHT hfiref0x, 2018 - 2019
*
*  TITLE:       SYSCALL.H
*
*  VERSION:     1.03
*
*  DATE:        07 Dec 2019
*
*  Syscall tables in adequate format to get rid of ReactOS govnokod.
*
* THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF
* ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED
* TO THE IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
*******************************************************************************/

#pragma once

typedef struct _SYSCALL_ENTRY {
    ULONG NumberOfArguments;
    PCHAR Name;
} SYSCALL_ENTRY, *PSYSCALL_ENTRY;

static const SYSCALL_ENTRY KiServiceTable[] = {
    { 6, "NtAcceptConnectPort" },
    { 8, "NtAccessCheck" },
    { 11, "NtAccessCheckAndAuditAlarm" },
    { 11, "NtAccessCheckByType" },
    { 16, "NtAccessCheckByTypeAndAuditAlarm" },
    { 11, "NtAccessCheckByTypeResultList" },
    { 16, "NtAccessCheckByTypeResultListAndAuditAlarm" },
    { 17, "NtAccessCheckByTypeResultListAndAuditAlarmByHandle" },
    { 3, "NtAddAtom" },
    { 2, "NtAddBootEntry" },
    { 2, "NtAddDriverEntry" },
    { 6, "NtAdjustGroupsToken" },
    { 6, "NtAdjustPrivilegesToken" },
    { 2, "NtAlertResumeThread" },
    { 1, "NtAlertThread" },
    { 1, "NtAllocateLocallyUniqueId" },
    { 3, "NtAllocateUserPhysicalPages" },
    { 4, "NtAllocateUuids" },
    { 6, "NtAllocateVirtualMemory" },
    { 2, "NtApphelpCacheControl" },
    { 2, "NtAreMappedFilesTheSame" },
    { 2, "NtAssignProcessToJobObject" },
    { 3, "NtCallbackReturn" },
    { 1, "NtCancelDeviceWakeupRequest" },
    { 2, "NtCancelIoFile" },
    { 2, "NtCancelTimer" },
    { 1, "NtClearEvent" },
    { 1, "NtClose" },
    { 3, "NtCloseObjectAuditAlarm" },
    { 2, "NtCompactKeys" },
    { 3, "NtCompareTokens" },
    { 1, "NtCompleteConnectPort" },
    { 1, "NtCompressKey" },
    { 8, "NtConnectPort" },
    { 2, "NtContinue" },
    { 4, "NtCreateDebugObject" },
    { 3, "NtCreateDirectoryObject" },
    { 5, "NtCreateEvent" },
    { 3, "NtCreateEventPair" },
    { 11, "NtCreateFile" },
    { 4, "NtCreateIoCompletion" },
    { 3, "NtCreateJobObject" },
    { 3, "NtCreateJobSet" },
    { 7, "NtCreateKey" },
    { 8, "NtCreateMailslotFile" },
    { 4, "NtCreateMutant" },
    { 14, "NtCreateNamedPipeFile" },
    { 4, "NtCreatePagingFile" },
    { 5, "NtCreatePort" },
    { 8, "NtCreateProcess" },
    { 9, "NtCreateProcessEx" },
    { 9, "NtCreateProfile" },
    { 7, "NtCreateSection" },
    { 5, "NtCreateSemaphore" },
    { 4, "NtCreateSymbolicLinkObject" },
    { 8, "NtCreateThread" },
    { 4, "NtCreateTimer" },
    { 13, "NtCreateToken" },
    { 5, "NtCreateWaitablePort" },
    { 2, "NtDebugActiveProcess" },
    { 3, "NtDebugContinue" },
    { 2, "NtDelayExecution" },
    { 1, "NtDeleteAtom" },
    { 1, "NtDeleteBootEntry" },
    { 1, "NtDeleteDriverEntry" },
    { 1, "NtDeleteFile" },
    { 1, "NtDeleteKey" },
    { 3, "NtDeleteObjectAuditAlarm" },
    { 2, "NtDeleteValueKey" },
    { 10, "NtDeviceIoControlFile" },
    { 1, "NtDisplayString" },
    { 7, "NtDuplicateObject" },
    { 6, "NtDuplicateToken" },
    { 2, "NtEnumerateBootEntries" },
    { 2, "NtEnumerateDriverEntries" },
    { 6, "NtEnumerateKey" },
    { 3, "NtEnumerateSystemEnvironmentValuesEx" },
    { 6, "NtEnumerateValueKey" },
    { 2, "NtExtendSection" },
    { 6, "NtFilterToken" },
    { 3, "NtFindAtom" },
    { 2, "NtFlushBuffersFile" },
    { 3, "NtFlushInstructionCache" },
    { 1, "NtFlushKey" },
    { 4, "NtFlushVirtualMemory" },
    { 0, "NtFlushWriteBuffer" },
    { 3, "NtFreeUserPhysicalPages" },
    { 4, "NtFreeVirtualMemory" },
    { 10, "NtFsControlFile" },
    { 2, "NtGetContextThread" },
    { 2, "NtGetDevicePowerState" },
    { 4, "NtGetPlugPlayEvent" },
    { 7, "NtGetWriteWatch" },
    { 1, "NtImpersonateAnonymousToken" },
    { 2, "NtImpersonateClientOfPort" },
    { 3, "NtImpersonateThread" },
    { 1, "NtInitializeRegistry" },
    { 4, "NtInitiatePowerAction" },
    { 2, "NtIsProcessInJob" },
    { 0, "NtIsSystemResumeAutomatic" },
    { 2, "NtListenPort" },
    { 1, "NtLoadDriver" },
    { 2, "NtLoadKey" },
    { 3, "NtLoadKey2" },
    { 4, "NtLoadKeyEx" },
    { 10, "NtLockFile" },
    { 2, "NtLockProductActivationKeys" },
    { 1, "NtLockRegistryKey" },
    { 4, "NtLockVirtualMemory" },
    { 1, "NtMakePermanentObject" },
    { 1, "NtMakeTemporaryObject" },
    { 3, "NtMapUserPhysicalPages" },
    { 3, "NtMapUserPhysicalPagesScatter" },
    { 10, "NtMapViewOfSection" },
    { 1, "NtModifyBootEntry" },
    { 1, "NtModifyDriverEntry" },
    { 9, "NtNotifyChangeDirectoryFile" },
    { 10, "NtNotifyChangeKey" },
    { 12, "NtNotifyChangeMultipleKeys" },
    { 3, "NtOpenDirectoryObject" },
    { 3, "NtOpenEvent" },
    { 3, "NtOpenEventPair" },
    { 6, "NtOpenFile" },
    { 3, "NtOpenIoCompletion" },
    { 3, "NtOpenJobObject" },
    { 3, "NtOpenKey" },
    { 3, "NtOpenMutant" },
    { 12, "NtOpenObjectAuditAlarm" },
    { 4, "NtOpenProcess" },
    { 3, "NtOpenProcessToken" },
    { 4, "NtOpenProcessTokenEx" },
    { 3, "NtOpenSection" },
    { 3, "NtOpenSemaphore" },
    { 3, "NtOpenSymbolicLinkObject" },
    { 4, "NtOpenThread" },
    { 4, "NtOpenThreadToken" },
    { 5, "NtOpenThreadTokenEx" },
    { 3, "NtOpenTimer" },
    { 3, "NtPlugPlayControl" },
    { 5, "NtPowerInformation" },
    { 3, "NtPrivilegeCheck" },
    { 6, "NtPrivilegeObjectAuditAlarm" },
    { 5, "NtPrivilegedServiceAuditAlarm" },
    { 5, "NtProtectVirtualMemory" },
    { 2, "NtPulseEvent" },
    { 2, "NtQueryAttributesFile" },
    { 2, "NtQueryBootEntryOrder" },
    { 2, "NtQueryBootOptions" },
    { 2, "NtQueryDebugFilterState" },
    { 2, "NtQueryDefaultLocale" },
    { 1, "NtQueryDefaultUILanguage" },
    { 11, "NtQueryDirectoryFile" },
    { 7, "NtQueryDirectoryObject" },
    { 2, "NtQueryDriverEntryOrder" },
    { 9, "NtQueryEaFile" },
    { 5, "NtQueryEvent" },
    { 2, "NtQueryFullAttributesFile" },
    { 5, "NtQueryInformationAtom" },
    { 5, "NtQueryInformationFile" },
    { 5, "NtQueryInformationJobObject" },
    { 5, "NtQueryInformationPort" },
    { 5, "NtQueryInformationProcess" },
    { 5, "NtQueryInformationThread" },
    { 5, "NtQueryInformationToken" },
    { 1, "NtQueryInstallUILanguage" },
    { 2, "NtQueryIntervalProfile" },
    { 5, "NtQueryIoCompletion" },
    { 5, "NtQueryKey" },
    { 6, "NtQueryMultipleValueKey" },
    { 5, "NtQueryMutant" },
    { 5, "NtQueryObject" },
    { 2, "NtQueryOpenSubKeys" },
    { 4, "NtQueryOpenSubKeysEx" },
    { 2, "NtQueryPerformanceCounter" },
    { 9, "NtQueryQuotaInformationFile" },
    { 5, "NtQuerySection" },
    { 5, "NtQuerySecurityObject" },
    { 5, "NtQuerySemaphore" },
    { 3, "NtQuerySymbolicLinkObject" },
    { 4, "NtQuerySystemEnvironmentValue" },
    { 5, "NtQuerySystemEnvironmentValueEx" },
    { 4, "NtQuerySystemInformation" },
    { 1, "NtQuerySystemTime" },
    { 5, "NtQueryTimer" },
    { 3, "NtQueryTimerResolution" },
    { 6, "NtQueryValueKey" },
    { 6, "NtQueryVirtualMemory" },
    { 5, "NtQueryVolumeInformationFile" },
    { 5, "NtQueueApcThread" },
    { 3, "NtRaiseException" },
    { 6, "NtRaiseHardError" },
    { 9, "NtReadFile" },
    { 9, "NtReadFileScatter" },
    { 6, "NtReadRequestData" },
    { 5, "NtReadVirtualMemory" },
    { 1, "NtRegisterThreadTerminatePort" },
    { 2, "NtReleaseMutant" },
    { 3, "NtReleaseSemaphore" },
    { 5, "NtRemoveIoCompletion" },
    { 2, "NtRemoveProcessDebug" },
    { 2, "NtRenameKey" },
    { 3, "NtReplaceKey" },
    { 2, "NtReplyPort" },
    { 4, "NtReplyWaitReceivePort" },
    { 5, "NtReplyWaitReceivePortEx" },
    { 2, "NtReplyWaitReplyPort" },
    { 1, "NtRequestDeviceWakeup" },
    { 2, "NtRequestPort" },
    { 3, "NtRequestWaitReplyPort" },
    { 1, "NtRequestWakeupLatency" },
    { 2, "NtResetEvent" },
    { 3, "NtResetWriteWatch" },
    { 3, "NtRestoreKey" },
    { 1, "NtResumeProcess" },
    { 2, "NtResumeThread" },
    { 2, "NtSaveKey" },
    { 3, "NtSaveKeyEx" },
    { 3, "NtSaveMergedKeys" },
    { 9, "NtSecureConnectPort" },
    { 2, "NtSetBootEntryOrder" },
    { 2, "NtSetBootOptions" },
    { 2, "NtSetContextThread" },
    { 3, "NtSetDebugFilterState" },
    { 1, "NtSetDefaultHardErrorPort" },
    { 2, "NtSetDefaultLocale" },
    { 1, "NtSetDefaultUILanguage" },
    { 2, "NtSetDriverEntryOrder" },
    { 4, "NtSetEaFile" },
    { 2, "NtSetEvent" },
    { 1, "NtSetEventBoostPriority" },
    { 1, "NtSetHighEventPair" },
    { 1, "NtSetHighWaitLowEventPair" },
    { 5, "NtSetInformationDebugObject" },
    { 5, "NtSetInformationFile" },
    { 4, "NtSetInformationJobObject" },
    { 4, "NtSetInformationKey" },
    { 4, "NtSetInformationObject" },
    { 4, "NtSetInformationProcess" },
    { 4, "NtSetInformationThread" },
    { 4, "NtSetInformationToken" },
    { 2, "NtSetIntervalProfile" },
    { 5, "NtSetIoCompletion" },
    { 6, "NtSetLdtEntries" },
    { 1, "NtSetLowEventPair" },
    { 1, "NtSetLowWaitHighEventPair" },
    { 4, "NtSetQuotaInformationFile" },
    { 3, "NtSetSecurityObject" },
    { 2, "NtSetSystemEnvironmentValue" },
    { 5, "NtSetSystemEnvironmentValueEx" },
    { 3, "NtSetSystemInformation" },
    { 3, "NtSetSystemPowerState" },
    { 2, "NtSetSystemTime" },
    { 2, "NtSetThreadExecutionState" },
    { 7, "NtSetTimer" },
    { 3, "NtSetTimerResolution" },
    { 1, "NtSetUuidSeed" },
    { 6, "NtSetValueKey" },
    { 5, "NtSetVolumeInformationFile" },
    { 1, "NtShutdownSystem" },
    { 4, "NtSignalAndWaitForSingleObject" },
    { 1, "NtStartProfile" },
    { 1, "NtStopProfile" },
    { 1, "NtSuspendProcess" },
    { 2, "NtSuspendThread" },
    { 6, "NtSystemDebugControl" },
    { 2, "NtTerminateJobObject" },
    { 2, "NtTerminateProcess" },
    { 2, "NtTerminateThread" },
    { 0, "NtTestAlert" },
    { 4, "NtTraceEvent" },
    { 4, "NtTranslateFilePath" },
    { 1, "NtUnloadDriver" },
    { 1, "NtUnloadKey" },
    { 2, "NtUnloadKey2" },
    { 2, "NtUnloadKeyEx" },
    { 5, "NtUnlockFile" },
    { 4, "NtUnlockVirtualMemory" },
    { 2, "NtUnmapViewOfSection" },
    { 2, "NtVdmControl" },
    { 4, "NtWaitForDebugEvent" },
    { 5, "NtWaitForMultipleObjects" },
    { 3, "NtWaitForSingleObject" },
    { 1, "NtWaitHighEventPair" },
    { 1, "NtWaitLowEventPair" },
    { 9, "NtWriteFile" },
    { 9, "NtWriteFileGather" },
    { 6, "NtWriteRequestData" },
    { 5, "NtWriteVirtualMemory" },
    { 0, "NtYieldExecution" },
    { 4, "NtCreateKeyedEvent" },
    { 3, "NtOpenKeyedEvent" },
    { 4, "NtReleaseKeyedEvent" },
    { 4, "NtWaitForKeyedEvent" },
    { 0, "NtQueryPortInformationProcess" },
    { 0, "NtGetCurrentProcessorNumber" },
    { 5, "NtWaitForMultipleObjects32" }
};

static const SYSCALL_ENTRY W32pServiceTable[] = {
    { 1, "NtGdiAbortDoc"},
    { 1, "NtGdiAbortPath"},
    { 6, "NtGdiAddFontResourceW"},
    { 4, "NtGdiAddRemoteFontToDC"},
    { 5, "NtGdiAddFontMemResourceEx"},
    { 2, "NtGdiRemoveMergeFont"},
    { 3, "NtGdiAddRemoteMMInstanceToDC"},
    { 12, "NtGdiAlphaBlend"},
    { 6, "NtGdiAngleArc"},
    { 0, "NtGdiAnyLinkedFonts"},
    { 1, "NtGdiFontIsLinked"},
    { 10, "NtGdiArcInternal"},
    { 1, "NtGdiBeginPath"},
    { 11, "NtGdiBitBlt"},
    { 1, "NtGdiCancelDC"},
    { 8, "NtGdiCheckBitmapBits"},
    { 1, "NtGdiCloseFigure"},
    { 2, "NtGdiClearBitmapAttributes"},
    { 2, "NtGdiClearBrushAttributes"},
    { 6, "NtGdiColorCorrectPalette"},
    { 4, "NtGdiCombineRgn"},
    { 3, "NtGdiCombineTransform"},
    { 1, "NtGdiComputeXformCoefficients"},
    { 4, "NtGdiConsoleTextOut"},
    { 2, "NtGdiConvertMetafileRect"},
    { 5, "NtGdiCreateBitmap"},
    { 1, "NtGdiCreateClientObj"},
    { 1, "NtGdiCreateColorSpace"},
    { 8, "NtGdiCreateColorTransform"},
    { 3, "NtGdiCreateCompatibleBitmap"},
    { 1, "NtGdiCreateCompatibleDC"},
    { 6, "NtGdiCreateDIBBrush"},
    { 11, "NtGdiCreateDIBitmapInternal"},
    { 9, "NtGdiCreateDIBSection"},
    { 4, "NtGdiCreateEllipticRgn"},
    { 1, "NtGdiCreateHalftonePalette"},
    { 3, "NtGdiCreateHatchBrushInternal"},
    { 1, "NtGdiCreateMetafileDC"},
    { 2, "NtGdiCreatePaletteInternal"},
    { 3, "NtGdiCreatePatternBrushInternal"},
    { 4, "NtGdiCreatePen"},
    { 4, "NtGdiCreateRectRgn"},
    { 6, "NtGdiCreateRoundRectRgn"},
    { 6, "NtGdiCreateServerMetaFile"},
    { 2, "NtGdiCreateSolidBrush"},
    { 4, "NtGdiD3dContextCreate"},
    { 1, "NtGdiD3dContextDestroy"},
    { 1, "NtGdiD3dContextDestroyAll"},
    { 1, "NtGdiD3dValidateTextureStageState"},
    { 7, "NtGdiD3dDrawPrimitives2"},
    { 1, "NtGdiDdGetDriverState"},
    { 3, "NtGdiDdAddAttachedSurface"},
    { 3, "NtGdiDdAlphaBlt"},
    { 2, "NtGdiDdAttachSurface"},
    { 2, "NtGdiDdBeginMoCompFrame"},
    { 3, "NtGdiDdBlt"},
    { 2, "NtGdiDdCanCreateSurface"},
    { 2, "NtGdiDdCanCreateD3DBuffer"},
    { 2, "NtGdiDdColorControl"},
    { 1, "NtGdiDdCreateDirectDrawObject"},
    { 8, "NtGdiDdCreateSurface"},
    { 8, "NtGdiDdCreateD3DBuffer"},
    { 2, "NtGdiDdCreateMoComp"},
    { 6, "NtGdiDdCreateSurfaceObject"},
    { 1, "NtGdiDdDeleteDirectDrawObject"},
    { 1, "NtGdiDdDeleteSurfaceObject"},
    { 2, "NtGdiDdDestroyMoComp"},
    { 2, "NtGdiDdDestroySurface"},
    { 1, "NtGdiDdDestroyD3DBuffer"},
    { 2, "NtGdiDdEndMoCompFrame"},
    { 5, "NtGdiDdFlip"},
    { 2, "NtGdiDdFlipToGDISurface"},
    { 2, "NtGdiDdGetAvailDriverMemory"},
    { 2, "NtGdiDdGetBltStatus"},
    { 2, "NtGdiDdGetDC"},
    { 2, "NtGdiDdGetDriverInfo"},
    { 3, "NtGdiDdGetDxHandle"},
    { 2, "NtGdiDdGetFlipStatus"},
    { 2, "NtGdiDdGetInternalMoCompInfo"},
    { 2, "NtGdiDdGetMoCompBuffInfo"},
    { 2, "NtGdiDdGetMoCompGuids"},
    { 2, "NtGdiDdGetMoCompFormats"},
    { 2, "NtGdiDdGetScanLine"},
    { 3, "NtGdiDdLock"},
    { 2, "NtGdiDdLockD3D"},
    { 11, "NtGdiDdQueryDirectDrawObject"},
    { 2, "NtGdiDdQueryMoCompStatus"},
    { 2, "NtGdiDdReenableDirectDrawObject"},
    { 1, "NtGdiDdReleaseDC"},
    { 2, "NtGdiDdRenderMoComp"},
    { 2, "NtGdiDdResetVisrgn"},
    { 2, "NtGdiDdSetColorKey"},
    { 2, "NtGdiDdSetExclusiveMode"},
    { 3, "NtGdiDdSetGammaRamp"},
    { 3, "NtGdiDdCreateSurfaceEx"},
    { 3, "NtGdiDdSetOverlayPosition"},
    { 2, "NtGdiDdUnattachSurface"},
    { 2, "NtGdiDdUnlock"},
    { 2, "NtGdiDdUnlockD3D"},
    { 3, "NtGdiDdUpdateOverlay"},
    { 2, "NtGdiDdWaitForVerticalBlank"},
    { 2, "NtGdiDvpCanCreateVideoPort"},
    { 2, "NtGdiDvpColorControl"},
    { 2, "NtGdiDvpCreateVideoPort"},
    { 2, "NtGdiDvpDestroyVideoPort"},
    { 4, "NtGdiDvpFlipVideoPort"},
    { 2, "NtGdiDvpGetVideoPortBandwidth"},
    { 2, "NtGdiDvpGetVideoPortField"},
    { 2, "NtGdiDvpGetVideoPortFlipStatus"},
    { 2, "NtGdiDvpGetVideoPortInputFormats"},
    { 2, "NtGdiDvpGetVideoPortLine"},
    { 2, "NtGdiDvpGetVideoPortOutputFormats"},
    { 2, "NtGdiDvpGetVideoPortConnectInfo"},
    { 2, "NtGdiDvpGetVideoSignalStatus"},
    { 4, "NtGdiDvpUpdateVideoPort"},
    { 2, "NtGdiDvpWaitForVideoPortSync"},
    { 3, "NtGdiDvpAcquireNotification"},
    { 2, "NtGdiDvpReleaseNotification"},
    { 6, "NtGdiDxgGenericThunk"},
    { 1, "NtGdiDeleteClientObj"},
    { 1, "NtGdiDeleteColorSpace"},
    { 2, "NtGdiDeleteColorTransform"},
    { 1, "NtGdiDeleteObjectApp"},
    { 4, "NtGdiDescribePixelFormat"},
    { 2, "NtGdiGetPerBandInfo"},
    { 4, "NtGdiDoBanding"},
    { 6, "NtGdiDoPalette"},
    { 4, "NtGdiDrawEscape"},
    { 5, "NtGdiEllipse"},
    { 1, "NtGdiEnableEudc"},
    { 1, "NtGdiEndDoc"},
    { 1, "NtGdiEndPage"},
    { 1, "NtGdiEndPath"},
    { 5, "NtGdiEnumFontChunk"},
    { 1, "NtGdiEnumFontClose"},
    { 7, "NtGdiEnumFontOpen"},
    { 4, "NtGdiEnumObjects"},
    { 2, "NtGdiEqualRgn"},
    { 7, "NtGdiEudcLoadUnloadLink"},
    { 5, "NtGdiExcludeClipRect"},
    { 11, "NtGdiExtCreatePen"},
    { 3, "NtGdiExtCreateRegion"},
    { 8, "NtGdiExtEscape"},
    { 5, "NtGdiExtFloodFill"},
    { 3, "NtGdiExtGetObjectW"},
    { 3, "NtGdiExtSelectClipRgn"},
    { 9, "NtGdiExtTextOutW"},
    { 1, "NtGdiFillPath"},
    { 3, "NtGdiFillRgn"},
    { 1, "NtGdiFlattenPath"},
    { 0, "NtGdiFlush"},
    { 2, "NtGdiForceUFIMapping"},
    { 5, "NtGdiFrameRgn"},
    { 5, "NtGdiFullscreenControl"},
    { 4, "NtGdiGetAndSetDCDword"},
    { 2, "NtGdiGetAppClipBox"},
    { 3, "NtGdiGetBitmapBits"},
    { 2, "NtGdiGetBitmapDimension"},
    { 3, "NtGdiGetBoundsRect"},
    { 6, "NtGdiGetCharABCWidthsW"},
    { 6, "NtGdiGetCharacterPlacementW"},
    { 1, "NtGdiGetCharSet"},
    { 6, "NtGdiGetCharWidthW"},
    { 2, "NtGdiGetCharWidthInfo"},
    { 2, "NtGdiGetColorAdjustment"},
    { 1, "NtGdiGetColorSpaceforBitmap"},
    { 3, "NtGdiGetDCDword"},
    { 1, "NtGdiGetDCforBitmap"},
    { 2, "NtGdiGetDCObject"},
    { 3, "NtGdiGetDCPoint"},
    { 2, "NtGdiGetDeviceCaps"},
    { 2, "NtGdiGetDeviceGammaRamp"},
    { 2, "NtGdiGetDeviceCapsAll"},
    { 9, "NtGdiGetDIBitsInternal"},
    { 2, "NtGdiGetETM"},
    { 3, "NtGdiGetEudcTimeStampEx"},
    { 5, "NtGdiGetFontData"},
    { 7, "NtGdiGetFontResourceInfoInternalW"},
    { 5, "NtGdiGetGlyphIndicesW"},
    { 6, "NtGdiGetGlyphIndicesWInternal"},
    { 8, "NtGdiGetGlyphOutline"},
    { 3, "NtGdiGetKerningPairs"},
    { 3, "NtGdiGetLinkedUFIs"},
    { 2, "NtGdiGetMiterLimit"},
    { 3, "NtGdiGetMonitorID"},
    { 2, "NtGdiGetNearestColor"},
    { 2, "NtGdiGetNearestPaletteIndex"},
    { 2, "NtGdiGetObjectBitmapHandle"},
    { 4, "NtGdiGetOutlineTextMetricsInternalW"},
    { 4, "NtGdiGetPath"},
    { 3, "NtGdiGetPixel"},
    { 3, "NtGdiGetRandomRgn"},
    { 2, "NtGdiGetRasterizerCaps"},
    { 3, "NtGdiGetRealizationInfo"},
    { 3, "NtGdiGetRegionData"},
    { 2, "NtGdiGetRgnBox"},
    { 7, "NtGdiGetServerMetaFileBits"},
    { 4, "NtGdiGetSpoolMessage"},
    { 5, "NtGdiGetStats"},
    { 1, "NtGdiGetStockObject"},
    { 5, "NtGdiGetStringBitmapW"},
    { 1, "NtGdiGetSystemPaletteUse"},
    { 3, "NtGdiGetTextCharsetInfo"},
    { 5, "NtGdiGetTextExtent"},
    { 8, "NtGdiGetTextExtentExW"},
    { 4, "NtGdiGetTextFaceW"},
    { 3, "NtGdiGetTextMetricsW"},
    { 3, "NtGdiGetTransform"},
    { 6, "NtGdiGetUFI"},
    { 7, "NtGdiGetEmbUFI"},
    { 10, "NtGdiGetUFIPathname"},
    { 0, "NtGdiGetEmbedFonts"},
    { 2, "NtGdiChangeGhostFont"},
    { 2, "NtGdiAddEmbFontToDC"},
    { 2, "NtGdiGetFontUnicodeRanges"},
    { 7, "NtGdiGetWidthTable"},
    { 6, "NtGdiGradientFill"},
    { 5, "NtGdiHfontCreate"},
    { 8, "NtGdiIcmBrushInfo"},
    { 0, "NtGdiInit"},
    { 0, "NtGdiInitSpool"},
    { 5, "NtGdiIntersectClipRect"},
    { 2, "NtGdiInvertRgn"},
    { 3, "NtGdiLineTo"},
    { 5, "NtGdiMakeFontDir"},
    { 2, "NtGdiMakeInfoDC"},
    { 13, "NtGdiMaskBlt"},
    { 3, "NtGdiModifyWorldTransform"},
    { 1, "NtGdiMonoBitmap"},
    { 4, "NtGdiMoveTo"},
    { 3, "NtGdiOffsetClipRgn"},
    { 3, "NtGdiOffsetRgn"},
    { 7, "NtGdiOpenDCW"},
    { 6, "NtGdiPatBlt"},
    { 5, "NtGdiPolyPatBlt"},
    { 1, "NtGdiPathToRegion"},
    { 11, "NtGdiPlgBlt"},
    { 4, "NtGdiPolyDraw"},
    { 5, "NtGdiPolyPolyDraw"},
    { 4, "NtGdiPolyTextOutW"},
    { 3, "NtGdiPtInRegion"},
    { 3, "NtGdiPtVisible"},
    { 3, "NtGdiQueryFonts"},
    { 1, "NtGdiQueryFontAssocInfo"},
    { 5, "NtGdiRectangle"},
    { 2, "NtGdiRectInRegion"},
    { 2, "NtGdiRectVisible"},
    { 6, "NtGdiRemoveFontResourceW"},
    { 1, "NtGdiRemoveFontMemResourceEx"},
    { 5, "NtGdiResetDC"},
    { 2, "NtGdiResizePalette"},
    { 2, "NtGdiRestoreDC"},
    { 7, "NtGdiRoundRect"},
    { 1, "NtGdiSaveDC"},
    { 6, "NtGdiScaleViewportExtEx"},
    { 6, "NtGdiScaleWindowExtEx"},
    { 2, "NtGdiSelectBitmap"},
    { 2, "NtGdiSelectBrush"},
    { 2, "NtGdiSelectClipPath"},
    { 2, "NtGdiSelectFont"},
    { 2, "NtGdiSelectPen"},
    { 2, "NtGdiSetBitmapAttributes"},
    { 3, "NtGdiSetBitmapBits"},
    { 4, "NtGdiSetBitmapDimension"},
    { 3, "NtGdiSetBoundsRect"},
    { 2, "NtGdiSetBrushAttributes"},
    { 4, "NtGdiSetBrushOrg"},
    { 2, "NtGdiSetColorAdjustment"},
    { 2, "NtGdiSetColorSpace"},
    { 2, "NtGdiSetDeviceGammaRamp"},
    { 16, "NtGdiSetDIBitsToDeviceInternal"},
    { 1, "NtGdiSetFontEnumeration"},
    { 3, "NtGdiSetFontXform"},
    { 3, "NtGdiSetIcmMode"},
    { 3, "NtGdiSetLinkedUFIs"},
    { 3, "NtGdiSetMagicColors"},
    { 1, "NtGdiSetMetaRgn"},
    { 3, "NtGdiSetMiterLimit"},
    { 1, "NtGdiGetDeviceWidth"},
    { 1, "NtGdiMirrorWindowOrg"},
    { 3, "NtGdiSetLayout"},
    { 4, "NtGdiSetPixel"},
    { 2, "NtGdiSetPixelFormat"},
    { 5, "NtGdiSetRectRgn"},
    { 2, "NtGdiSetSystemPaletteUse"},
    { 3, "NtGdiSetTextJustification"},
    { 3, "NtGdiSetupPublicCFONT"},
    { 5, "NtGdiSetVirtualResolution"},
    { 3, "NtGdiSetSizeDevice"},
    { 4, "NtGdiStartDoc"},
    { 1, "NtGdiStartPage"},
    { 12, "NtGdiStretchBlt"},
    { 16, "NtGdiStretchDIBitsInternal"},
    { 1, "NtGdiStrokeAndFillPath"},
    { 1, "NtGdiStrokePath"},
    { 1, "NtGdiSwapBuffers"},
    { 5, "NtGdiTransformPoints"},
    { 11, "NtGdiTransparentBlt"},
    { 2, "NtGdiUnloadPrinterDriver"},
    { 1, "NtGdiUnmapMemFont"},
    { 1, "NtGdiUnrealizeObject"},
    { 1, "NtGdiUpdateColors"},
    { 1, "NtGdiWidenPath"},
    { 2, "NtUserActivateKeyboardLayout"},
    { 3, "NtUserAlterWindowStyle"},
    { 3, "NtUserAssociateInputContext"},
    { 3, "NtUserAttachThreadInput"},
    { 2, "NtUserBeginPaint"},
    { 8, "NtUserBitBltSysBmp"},
    { 1, "NtUserBlockInput"},
    { 4, "NtUserBuildHimcList"},
    { 7, "NtUserBuildHwndList"},
    { 4, "NtUserBuildNameList"},
    { 4, "NtUserBuildPropList"},
    { 2, "NtUserCallHwnd"},
    { 2, "NtUserCallHwndLock"},
    { 2, "NtUserCallHwndOpt"},
    { 3, "NtUserCallHwndParam"},
    { 3, "NtUserCallHwndParamLock"},
    { 2, "NtUserCallMsgFilter"},
    { 4, "NtUserCallNextHookEx"},
    { 1, "NtUserCallNoParam"},
    { 2, "NtUserCallOneParam"},
    { 3, "NtUserCallTwoParam"},
    { 2, "NtUserChangeClipboardChain"},
    { 4, "NtUserChangeDisplaySettings"},
    { 2, "NtUserCheckImeHotKey"},
    { 3, "NtUserCheckMenuItem"},
    { 4, "NtUserChildWindowFromPointEx"},
    { 1, "NtUserClipCursor"},
    { 0, "NtUserCloseClipboard"},
    { 1, "NtUserCloseDesktop"},
    { 1, "NtUserCloseWindowStation"},
    { 3, "NtUserConsoleControl"},
    { 2, "NtUserConvertMemHandle"},
    { 3, "NtUserCopyAcceleratorTable"},
    { 0, "NtUserCountClipboardFormats"},
    { 2, "NtUserCreateAcceleratorTable"},
    { 4, "NtUserCreateCaret"},
    { 5, "NtUserCreateDesktop"},
    { 1, "NtUserCreateInputContext"},
    { 4, "NtUserCreateLocalMemHandle"},
    { 15, "NtUserCreateWindowEx"},
    { 7, "NtUserCreateWindowStation"},
    { 3, "NtUserDdeGetQualityOfService"},
    { 5, "NtUserDdeInitialize"},
    { 3, "NtUserDdeSetQualityOfService"},
    { 8, "NtUserDeferWindowPos"},
    { 2, "NtUserDefSetText"},
    { 3, "NtUserDeleteMenu"},
    { 1, "NtUserDestroyAcceleratorTable"},
    { 2, "NtUserDestroyCursor"},
    { 1, "NtUserDestroyInputContext"},
    { 1, "NtUserDestroyMenu"},
    { 1, "NtUserDestroyWindow"},
    { 1, "NtUserDisableThreadIme"},
    { 1, "NtUserDispatchMessage"},
    { 3, "NtUserDragDetect"},
    { 5, "NtUserDragObject"},
    { 4, "NtUserDrawAnimatedRects"},
    { 4, "NtUserDrawCaption"},
    { 7, "NtUserDrawCaptionTemp"},
    { 11, "NtUserDrawIconEx"},
    { 5, "NtUserDrawMenuBarTemp"},
    { 0, "NtUserEmptyClipboard"},
    { 3, "NtUserEnableMenuItem"},
    { 3, "NtUserEnableScrollBar"},
    { 2, "NtUserEndDeferWindowPosEx"},
    { 0, "NtUserEndMenu"},
    { 2, "NtUserEndPaint"},
    { 4, "NtUserEnumDisplayDevices"},
    { 5, "NtUserEnumDisplayMonitors"},
    { 4, "NtUserEnumDisplaySettings"},
    { 1, "NtUserEvent"},
    { 2, "NtUserExcludeUpdateRgn"},
    { 4, "NtUserFillWindow"},
    { 3, "NtUserFindExistingCursorIcon"},
    { 5, "NtUserFindWindowEx"},
    { 1, "NtUserFlashWindowEx"},
    { 6, "NtUserGetAltTabInfo"},
    { 2, "NtUserGetAncestor"},
    { 1, "NtUserGetAppImeLevel"},
    { 1, "NtUserGetAsyncKeyState"},
    { 2, "NtUserGetAtomName"},
    { 0, "NtUserGetCaretBlinkTime"},
    { 1, "NtUserGetCaretPos"},
    { 5, "NtUserGetClassInfo"},
    { 3, "NtUserGetClassName"},
    { 2, "NtUserGetClipboardData"},
    { 3, "NtUserGetClipboardFormatName"},
    { 0, "NtUserGetClipboardOwner"},
    { 0, "NtUserGetClipboardSequenceNumber"},
    { 0, "NtUserGetClipboardViewer"},
    { 1, "NtUserGetClipCursor"},
    { 2, "NtUserGetComboBoxInfo"},
    { 3, "NtUserGetControlBrush"},
    { 4, "NtUserGetControlColor"},
    { 3, "NtUserGetCPD"},
    { 4, "NtUserGetCursorFrameInfo"},
    { 1, "NtUserGetCursorInfo"},
    { 1, "NtUserGetDC"},
    { 3, "NtUserGetDCEx"},
    { 0, "NtUserGetDoubleClickTime"},
    { 0, "NtUserGetForegroundWindow"},
    { 2, "NtUserGetGuiResources"},
    { 2, "NtUserGetGUIThreadInfo"},
    { 6, "NtUserGetIconInfo"},
    { 4, "NtUserGetIconSize"},
    { 4, "NtUserGetImeHotKey"},
    { 2, "NtUserGetImeInfoEx"},
    { 3, "NtUserGetInternalWindowPos"},
    { 2, "NtUserGetKeyboardLayoutList"},
    { 1, "NtUserGetKeyboardLayoutName"},
    { 1, "NtUserGetKeyboardState"},
    { 3, "NtUserGetKeyNameText"},
    { 1, "NtUserGetKeyState"},
    { 1, "NtUserGetListBoxInfo"},
    { 4, "NtUserGetMenuBarInfo"},
    { 2, "NtUserGetMenuIndex"},
    { 4, "NtUserGetMenuItemRect"},
    { 4, "NtUserGetMessage"},
    { 5, "NtUserGetMouseMovePointsEx"},
    { 5, "NtUserGetObjectInformation"},
    { 0, "NtUserGetOpenClipboardWindow"},
    { 2, "NtUserGetPriorityClipboardFormat"},
    { 0, "NtUserGetProcessWindowStation"},
    { 3, "NtUserGetRawInputBuffer"},
    { 5, "NtUserGetRawInputData"},
    { 4, "NtUserGetRawInputDeviceInfo"},
    { 3, "NtUserGetRawInputDeviceList"},
    { 3, "NtUserGetRegisteredRawInputDevices"},
    { 3, "NtUserGetScrollBarInfo"},
    { 2, "NtUserGetSystemMenu"},
    { 2, "NtUserGetThreadDesktop"},
    { 1, "NtUserGetThreadState"},
    { 2, "NtUserGetTitleBarInfo"},
    { 3, "NtUserGetUpdateRect"},
    { 3, "NtUserGetUpdateRgn"},
    { 1, "NtUserGetWindowDC"},
    { 2, "NtUserGetWindowPlacement"},
    { 2, "NtUserGetWOWClass"},
    { 3, "NtUserHardErrorControl"},
    { 1, "NtUserHideCaret"},
    { 4, "NtUserHiliteMenuItem"},
    { 2, "NtUserImpersonateDdeClientWindow"},
    { 3, "NtUserInitialize"},
    { 4, "NtUserInitializeClientPfnArrays"},
    { 12, "NtUserInitTask"},
    { 3, "NtUserInternalGetWindowText"},
    { 3, "NtUserInvalidateRect"},
    { 3, "NtUserInvalidateRgn"},
    { 1, "NtUserIsClipboardFormatAvailable"},
    { 2, "NtUserKillTimer"},
    { 7, "NtUserLoadKeyboardLayoutEx"},
    { 1, "NtUserLockWindowStation"},
    { 1, "NtUserLockWindowUpdate"},
    { 0, "NtUserLockWorkStation"},
    { 4, "NtUserMapVirtualKeyEx"},
    { 4, "NtUserMenuItemFromPoint"},
    { 7, "NtUserMessageCall"},
    { 3, "NtUserMinMaximize"},
    { 0, "NtUserMNDragLeave"},
    { 2, "NtUserMNDragOver"},
    { 2, "NtUserModifyUserStartupInfoFlags"},
    { 6, "NtUserMoveWindow"},
    { 3, "NtUserNotifyIMEStatus"},
    { 4, "NtUserNotifyProcessCreate"},
    { 4, "NtUserNotifyWinEvent"},
    { 2, "NtUserOpenClipboard"},
    { 3, "NtUserOpenDesktop"},
    { 3, "NtUserOpenInputDesktop"},
    { 2, "NtUserOpenWindowStation"},
    { 1, "NtUserPaintDesktop"},
    { 5, "NtUserPeekMessage"},
    { 4, "NtUserPostMessage"},
    { 4, "NtUserPostThreadMessage"},
    { 3, "NtUserPrintWindow"},
    { 3, "NtUserProcessConnect"},
    { 4, "NtUserQueryInformationThread"},
    { 2, "NtUserQueryInputContext"},
    { 1, "NtUserQuerySendMessage"},
    { 2, "NtUserQueryWindow"},
    { 3, "NtUserRealChildWindowFromPoint"},
    { 6, "NtUserRealInternalGetMessage"},
    { 2, "NtUserRealWaitMessageEx"},
    { 4, "NtUserRedrawWindow"},
    { 7, "NtUserRegisterClassExWOW"},
    { 4, "NtUserRegisterUserApiHook"},
    { 4, "NtUserRegisterHotKey"},
    { 3, "NtUserRegisterRawInputDevices"},
    { 1, "NtUserRegisterTasklist"},
    { 1, "NtUserRegisterWindowMessage"},
    { 3, "NtUserRemoveMenu"},
    { 2, "NtUserRemoveProp"},
    { 4, "NtUserResolveDesktop"},
    { 1, "NtUserResolveDesktopForWOW"},
    { 4, "NtUserSBGetParms"},
    { 7, "NtUserScrollDC"},
    { 8, "NtUserScrollWindowEx"},
    { 3, "NtUserSelectPalette"},
    { 3, "NtUserSendInput"},
    { 1, "NtUserSetActiveWindow"},
    { 2, "NtUserSetAppImeLevel"},
    { 1, "NtUserSetCapture"},
    { 4, "NtUserSetClassLong"},
    { 3, "NtUserSetClassWord"},
    { 3, "NtUserSetClipboardData"},
    { 1, "NtUserSetClipboardViewer"},
    { 2, "NtUserSetConsoleReserveKeys"},
    { 1, "NtUserSetCursor"},
    { 2, "NtUserSetCursorContents"},
    { 4, "NtUserSetCursorIconData"},
    { 1, "NtUserSetFocus"},
    { 5, "NtUserSetImeHotKey"},
    { 1, "NtUserSetImeInfoEx"},
    { 2, "NtUserSetImeOwnerWindow"},
    { 4, "NtUserSetInformationProcess"},
    { 4, "NtUserSetInformationThread"},
    { 4, "NtUserSetInternalWindowPos"},
    { 1, "NtUserSetKeyboardState"},
    { 1, "NtUserSetLogonNotifyWindow"},
    { 3, "NtUserSetMenu"},
    { 2, "NtUserSetMenuContextHelpId"},
    { 3, "NtUserSetMenuDefaultItem"},
    { 1, "NtUserSetMenuFlagRtoL"},
    { 4, "NtUserSetObjectInformation"},
    { 2, "NtUserSetParent"},
    { 1, "NtUserSetProcessWindowStation"},
    { 3, "NtUserSetProp"},
    { 4, "NtUserSetScrollInfo"},
    { 2, "NtUserSetShellWindowEx"},
    { 4, "NtUserSetSysColors"},
    { 2, "NtUserSetSystemCursor"},
    { 2, "NtUserSetSystemMenu"},
    { 4, "NtUserSetSystemTimer"},
    { 1, "NtUserSetThreadDesktop"},
    { 2, "NtUserSetThreadLayoutHandles"},
    { 2, "NtUserSetThreadState"},
    { 4, "NtUserSetTimer"},
    { 2, "NtUserSetWindowFNID"},
    { 4, "NtUserSetWindowLong"},
    { 2, "NtUserSetWindowPlacement"},
    { 7, "NtUserSetWindowPos"},
    { 3, "NtUserSetWindowRgn"},
    { 3, "NtUserSetWindowsHookAW"},
    { 6, "NtUserSetWindowsHookEx"},
    { 4, "NtUserSetWindowStationUser"},
    { 3, "NtUserSetWindowWord"},
    { 8, "NtUserSetWinEventHook"},
    { 1, "NtUserShowCaret"},
    { 3, "NtUserShowScrollBar"},
    { 2, "NtUserShowWindow"},
    { 2, "NtUserShowWindowAsync"},
    { 0, "NtUserSoundSentry"},
    { 1, "NtUserSwitchDesktop"},
    { 4, "NtUserSystemParametersInfo"},
    { 1, "NtUserTestForInteractiveUser"},
    { 2, "NtUserThunkedMenuInfo"},
    { 6, "NtUserThunkedMenuItemInfo"},
    { 7, "NtUserToUnicodeEx"},
    { 1, "NtUserTrackMouseEvent"},
    { 6, "NtUserTrackPopupMenuEx"},
    { 5, "NtUserCalcMenuBar"},
    { 6, "NtUserPaintMenuBar"},
    { 3, "NtUserTranslateAccelerator"},
    { 2, "NtUserTranslateMessage"},
    { 1, "NtUserUnhookWindowsHookEx"},
    { 1, "NtUserUnhookWinEvent"},
    { 1, "NtUserUnloadKeyboardLayout"},
    { 1, "NtUserUnlockWindowStation"},
    { 3, "NtUserUnregisterClass"},
    { 0, "NtUserUnregisterUserApiHook"},
    { 2, "NtUserUnregisterHotKey"},
    { 3, "NtUserUpdateInputContext"},
    { 3, "NtUserUpdateInstance"},
    { 10, "NtUserUpdateLayeredWindow"},
    { 4, "NtUserGetLayeredWindowAttributes"},
    { 4, "NtUserSetLayeredWindowAttributes"},
    { 2, "NtUserUpdatePerUserSystemParameters"},
    { 3, "NtUserUserHandleGrantAccess"},
    { 1, "NtUserValidateHandleSecure"},
    { 2, "NtUserValidateRect"},
    { 1, "NtUserValidateTimerCallback"},
    { 3, "NtUserVkKeyScanEx"},
    { 3, "NtUserWaitForInputIdle"},
    { 1, "NtUserWaitForMsgAndEvent"},
    { 0, "NtUserWaitMessage"},
    { 6, "NtUserWin32PoolAllocationStats"},
    { 2, "NtUserWindowFromPoint"},
    { 0, "NtUserYieldTask"},
    { 3, "NtUserRemoteConnect"},
    { 4, "NtUserRemoteRedrawRectangle"},
    { 0, "NtUserRemoteRedrawScreen"},
    { 0, "NtUserRemoteStopScreenUpdates"},
    { 3, "NtUserCtxDisplayIOCtl"},
    { 3, "NtGdiEngAssociateSurface"},
    { 6, "NtGdiEngCreateBitmap"},
    { 4, "NtGdiEngCreateDeviceSurface"},
    { 4, "NtGdiEngCreateDeviceBitmap"},
    { 6, "NtGdiEngCreatePalette"},
    { 3, "NtGdiEngComputeGlyphSet"},
    { 6, "NtGdiEngCopyBits"},
    { 1, "NtGdiEngDeletePalette"},
    { 1, "NtGdiEngDeleteSurface"},
    { 3, "NtGdiEngEraseSurface"},
    { 1, "NtGdiEngUnlockSurface"},
    { 1, "NtGdiEngLockSurface"},
    { 11, "NtGdiEngBitBlt"},
    { 11, "NtGdiEngStretchBlt"},
    { 11, "NtGdiEngPlgBlt"},
    { 1, "NtGdiEngMarkBandingSurface"},
    { 8, "NtGdiEngStrokePath"},
    { 7, "NtGdiEngFillPath"},
    { 10, "NtGdiEngStrokeAndFillPath"},
    { 5, "NtGdiEngPaint"},
    { 9, "NtGdiEngLineTo"},
    { 7, "NtGdiEngAlphaBlend"},
    { 10, "NtGdiEngGradientFill"},
    { 8, "NtGdiEngTransparentBlt"},
    { 10, "NtGdiEngTextOut"},
    { 13, "NtGdiEngStretchBltROP"},
    { 4, "NtGdiXLATEOBJ_cGetPalette"},
    { 2, "NtGdiXLATEOBJ_iXlate"},
    { 1, "NtGdiXLATEOBJ_hGetColorTransform"},
    { 3, "NtGdiCLIPOBJ_bEnum"},
    { 5, "NtGdiCLIPOBJ_cEnumStart"},
    { 1, "NtGdiCLIPOBJ_ppoGetPath"},
    { 1, "NtGdiEngDeletePath"},
    { 0, "NtGdiEngCreateClip"},
    { 1, "NtGdiEngDeleteClip"},
    { 1, "NtGdiBRUSHOBJ_ulGetBrushColor"},
    { 2, "NtGdiBRUSHOBJ_pvAllocRbrush"},
    { 1, "NtGdiBRUSHOBJ_pvGetRbrush"},
    { 1, "NtGdiBRUSHOBJ_hGetColorTransform"},
    { 5, "NtGdiXFORMOBJ_bApplyXform"},
    { 2, "NtGdiXFORMOBJ_iGetXform"},
    { 3, "NtGdiFONTOBJ_vGetInfo"},
    { 1, "NtGdiFONTOBJ_pxoGetXform"},
    { 5, "NtGdiFONTOBJ_cGetGlyphs"},
    { 1, "NtGdiFONTOBJ_pifi"},
    { 1, "NtGdiFONTOBJ_pfdg"},
    { 2, "NtGdiFONTOBJ_pQueryGlyphAttrs"},
    { 2, "NtGdiFONTOBJ_pvTrueTypeFontFile"},
    { 2, "NtGdiFONTOBJ_cGetAllGlyphHandles"},
    { 3, "NtGdiSTROBJ_bEnum"},
    { 3, "NtGdiSTROBJ_bEnumPositionsOnly"},
    { 4, "NtGdiSTROBJ_bGetAdvanceWidths"},
    { 1, "NtGdiSTROBJ_vEnumStart"},
    { 1, "NtGdiSTROBJ_dwGetCodePage"},
    { 2, "NtGdiPATHOBJ_vGetBounds"},
    { 2, "NtGdiPATHOBJ_bEnum"},
    { 1, "NtGdiPATHOBJ_vEnumStart"},
    { 4, "NtGdiPATHOBJ_vEnumStartClipLines"},
    { 3, "NtGdiPATHOBJ_bEnumClipLines"},
    { 1, "NtGdiGetDhpdev"},
    { 1, "NtGdiEngCheckAbort"},
    { 4, "NtGdiHT_Get8BPPFormatPalette"},
    { 6, "NtGdiHT_Get8BPPMaskPalette"},
    { 1, "NtGdiUpdateTransform"},
    { 4, "NtGdiSetPUMPDOBJ"},
    { 2, "NtGdiBRUSHOBJ_DeleteRbrush"},
    { 1, "NtGdiUMPDEngFreeUserMem"},
    { 3, "NtGdiDrawStream"},
#ifdef _USE_CHECKED_TABLE
    { 2, "NtUserDbgWin32HeapFail"},
    { 2, "NtUserDbgWin32HeapStat"},
    { 2, "NtUserSetDbgTag"},
    { 1, "NtUserSetDbgTagCount"},
    { 1, "NtUserSetRipFlags"},
#endif
    { 2, "NtGdiMakeObjectXferable"},
    { 1, "NtDxEngGetRedirectionBitmap"},
    { 4, "NtGdiSetViewportOrgEx"},
    { 4, "NtGdiSetWindowOrgEx"},
    { 4, "NtGdiGetFontFamilyInfo"},
    { 4, "NtGdiOffsetViewportOrgEx"},
    { 4, "NtGdiOffsetWindowOrgEx"},
    { 2, "NtUserGetMonitorInfo"},
    { 3, "NtUserMonitorFromPoint"},
    { 2, "NtUserMonitorFromRect"},
    { 2, "NtUserMonitorFromWindow"},
    { 3, "NtUserSetScrollBarInfo"},
    { 1, "NtGdiDdDDICreateDCFromMemory"},
    { 1, "NtGdiDdDDIDestroyDCFromMemory"}
};
