APRIORI DXE {
  INF MdeModulePkg/Core/Dxe/DxeMain.inf
  INF MdeModulePkg/Universal/PCD/Dxe/Pcd.inf
  INF Binaries/FP4/QcomPkg/Drivers/EnvDxe/EnvDxe.inf
  INF MdeModulePkg/Universal/ReportStatusCodeRouter/RuntimeDxe/ReportStatusCodeRouterRuntimeDxe.inf
  INF MdeModulePkg/Universal/StatusCodeHandler/RuntimeDxe/StatusCodeHandlerRuntimeDxe.inf
  INF MdeModulePkg/Core/RuntimeDxe/RuntimeDxe.inf
  INF ArmPkg/Drivers/CpuDxe/CpuDxe.inf
  INF ArmPkg/Drivers/ArmGic/ArmGicDxe.inf
  INF EmbeddedPkg/MetronomeDxe/MetronomeDxe.inf
  INF ArmPkg/Drivers/TimerDxe/TimerDxe.inf
  # INF ArmPkg/Drivers/ArmPsciMpServicesDxe/ArmPsciMpServicesDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SmemDxe/SmemDxe.inf
  INF QcomPkg/Drivers/DynamicRamDxe/DynamicRamDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/DALSYSDxe/DALSYSDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/HWIODxe/HWIODxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ChipInfoDxe/ChipInfoDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PlatformInfoDxe/PlatformInfoDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/HALIOMMUDxe/HALIOMMUDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ULogDxe/ULogDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/CmdDbDxe/CmdDbDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PwrUtilsDxe/PwrUtilsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/NpaDxe/NpaDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/RpmhDxe/RpmhDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PdcDxe/PdcDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/VcsDxe/VcsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ClockDxe/ClockDxe.inf
  INF QcomPkg/Drivers/CpuClockHandlerDxe/CpuClockHandlerDxe.inf
  # INF QcomPkg/Drivers/ClockSpeedUpDxe/ClockSpeedUpDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ShmBridgeDxe/ShmBridgeDxeLA.inf
  INF Binaries/FP4/QcomPkg/Drivers/TzDxe/ScmDxeLA.inf
  INF MdeModulePkg/Universal/Disk/DiskIoDxe/DiskIoDxe.inf
  INF MdeModulePkg/Universal/Disk/PartitionDxe/PartitionDxe.inf
  INF MdeModulePkg/Universal/Disk/UnicodeCollation/EnglishDxe/EnglishDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SdccDxe/SdccDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UFSDxe/UFSDxe.inf
  INF FatPkg/EnhancedFatDxe/Fat.inf
  INF Binaries/FP4/QcomPkg/Drivers/TzDxe/TzDxeLA.inf
  INF MdeModulePkg/Universal/Variable/RuntimeDxe/VariableRuntimeDxe.inf
  # INF Binaries/FP4/QcomPkg/Drivers/FeatureEnablerDxe/FeatureEnablerDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomWDogDxe/QcomWDogDxe.inf
  # DALTMLMM <- no idea what that even is lol so ima just replace that with TLMMDxe
  INF Binaries/FP4/QcomPkg/Drivers/TLMMDxe/TLMMDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/SPMIDxe/SPMIDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/DDRInfoDxe/DDRInfoDxe.inf
  INF QcomPkg/Drivers/DdrClockHandlerDxe/DdrClockHandlerDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ResetRuntimeDxe/ResetRuntimeDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PmicDxe/PmicDxeLa.inf

  !if $(USE_CUSTOM_DISPLAY_DRIVER) == 1
   # INF Binaries/FP4/QcomPkg/Drivers/DisplayDxe/DisplayDxe.inf
  !else
    INF SiliciumPkg/Drivers/SimpleFbDxe/SimpleFbDxe.inf
  !endif

  INF Binaries/FP4/QcomPkg/Drivers/FvUtilsDxe/FvUtilsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ADSPDxe/ADSPDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PILProxyDxe/PILProxyDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/PILDxe/PILDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/CPRDxe/CPRDxe.inf
  INF MdeModulePkg/Universal/WatchdogTimerDxe/WatchdogTimer.inf
  # INF Binaries/FP4/QcomPkg/Drivers/ASN1X509Dxe/ASN1X509Dxe.inf
  # INF Binaries/FP4/QcomPkg/Drivers/SecRSADxe/SecRSADxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/VerifiedBootDxe/VerifiedBootDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/EmbeddedMonotonicCounter/EmbeddedMonotonicCounter.inf
  INF EmbeddedPkg/RealTimeClockRuntimeDxe/RealTimeClockRuntimeDxe.inf
  INF MdeModulePkg/Universal/PrintDxe/PrintDxe.inf
  INF MdeModulePkg/Universal/DevicePathDxe/DevicePathDxe.inf
  INF MdeModulePkg/Universal/CapsuleRuntimeDxe/CapsuleRuntimeDxe.inf
  INF MdeModulePkg/Universal/HiiDatabaseDxe/HiiDatabaseDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/FontDxe/FontDxe.inf
  # INF Binaries/FP4/QcomPkg/Drivers/QcomBds/QcomBds.inf
  INF MdeModulePkg/Universal/BdsDxe/BdsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/I2CDxe/I2CDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbPwrCtrlDxe/UsbPwrCtrlDxe.inf
      INF Binaries/FP4/QcomPkg/Drivers/AdcDxe/AdcDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/QcomChargerDxe/QcomChargerDxeLA.inf
  INF Binaries/FP4/QcomPkg/Drivers/ChargerExDxe/ChargerExDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbfnDwc3Dxe/UsbfnDwc3Dxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/UsbConfigDxe/UsbConfigDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/ButtonsDxe/ButtonsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/TsensDxe/TsensDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/LimitsDxe/LimitsDxe.inf
  INF Binaries/FP4/QcomPkg/Drivers/GpiDxe/GpiDxe.inf
  INF EmbeddedPkg/SimpleTextInOutSerial/SimpleTextInOutSerial.inf
  INF MdeModulePkg/Universal/Console/ConPlatformDxe/ConPlatformDxe.inf
  INF MdeModulePkg/Universal/Console/ConSplitterDxe/ConSplitterDxe.inf
  INF MdeModulePkg/Universal/Console/GraphicsConsoleDxe/GraphicsConsoleDxe.inf
}