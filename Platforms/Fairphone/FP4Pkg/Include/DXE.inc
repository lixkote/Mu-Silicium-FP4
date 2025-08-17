  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF MdeModulePkg/Universal/SecurityStubDxe/SecurityStubDxe.inf
  # SecRSA2048 <- no idea what's that
  INF Binaries/FP4/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF Binaries/FP4/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/VariableDxe/VariableDxe.inf
  INF EmbeddedPkg/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/ResetSystemRuntimeDxe/ResetSystemRuntimeDxe.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/FontDxe/FontDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomMpmTimerDxe/QcomMpmTimerDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  # INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/FP4/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
!endif
  INF Binaries/FP4/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/MinidumpTADxe/MinidumpTADxe.inf

!if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
  INF Binaries/FP4/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
!else
  INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
!endif

  INF Binaries/FP4/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf
  INF Binaries/FP4/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf

  INF MdeModulePkg/Bus/Usb/UsbBusDxe/UsbBusDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbKbDxe/UsbKbDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMouseAbsolutePointerDxe/UsbMouseAbsolutePointerDxe.inf
  INF MdeModulePkg/Bus/Usb/UsbMassStorageDxe/UsbMassStorageDxe.inf

  INF Binaries/FP4/QcomPkg/Drivers/UsbMsdDxe/UsbMsdDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbDeviceDxe/UsbDeviceDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/HashDxe/HashDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/CipherDxe/CipherDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/MacDxe/MacDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/RNGDxe/RngDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomBds/QcomBds.inf
  INF Binaries/FP4/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  # FvDxe <- no idea what's that
  INF Binaries/FP4/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf