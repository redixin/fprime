// ======================================================================
// \title  RefTopologyAc.cpp
// \author Generated by fpp-to-cpp
// \brief  cpp file for Ref topology
//
// \copyright
// Copyright (c) 2021 California Institute of Technology.
// U.S. Government sponsorship acknowledged.
// All rights reserved.
// ======================================================================

#include "Ref/Top/RefTopologyAc.hpp"

namespace Ref {

  namespace {

    // ----------------------------------------------------------------------
    // Component configuration objects
    // ----------------------------------------------------------------------

    namespace ConfigObjects {

      namespace downlink {
        Svc::FprimeFraming framing;
      }

      namespace health {
        Svc::HealthImpl::PingEntry pingEntries[] = {
          {
            PingEntries::blockDrv::WARN,
            PingEntries::blockDrv::FATAL,
            "blockDrv"
          },
          {
            PingEntries::chanTlm::WARN,
            PingEntries::chanTlm::FATAL,
            "chanTlm"
          },
          {
            PingEntries::cmdDisp::WARN,
            PingEntries::cmdDisp::FATAL,
            "cmdDisp"
          },
          {
            PingEntries::cmdSeq::WARN,
            PingEntries::cmdSeq::FATAL,
            "cmdSeq"
          },
          {
            PingEntries::eventLogger::WARN,
            PingEntries::eventLogger::FATAL,
            "eventLogger"
          },
          {
            PingEntries::fileDownlink::WARN,
            PingEntries::fileDownlink::FATAL,
            "fileDownlink"
          },
          {
            PingEntries::fileManager::WARN,
            PingEntries::fileManager::FATAL,
            "fileManager"
          },
          {
            PingEntries::fileUplink::WARN,
            PingEntries::fileUplink::FATAL,
            "fileUplink"
          },
          {
            PingEntries::pingRcvr::WARN,
            PingEntries::pingRcvr::FATAL,
            "pingRcvr"
          },
          {
            PingEntries::prmDb::WARN,
            PingEntries::prmDb::FATAL,
            "prmDb"
          },
          {
            PingEntries::rateGroup1Comp::WARN,
            PingEntries::rateGroup1Comp::FATAL,
            "rateGroup1Comp"
          },
          {
            PingEntries::rateGroup2Comp::WARN,
            PingEntries::rateGroup2Comp::FATAL,
            "rateGroup2Comp"
          },
          {
            PingEntries::rateGroup3Comp::WARN,
            PingEntries::rateGroup3Comp::FATAL,
            "rateGroup3Comp"
          },
        };
      }

      namespace rateGroup1Comp {
        NATIVE_UINT_TYPE context[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      }

      namespace rateGroup2Comp {
        NATIVE_UINT_TYPE context[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      }

      namespace rateGroup3Comp {
        NATIVE_UINT_TYPE context[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      }

      namespace rateGroupDriverComp {
        NATIVE_INT_TYPE rgDivs[Svc::RateGroupDriverImpl::DIVIDER_SIZE] = { 1, 2, 4 };
      }

      namespace uplink {
        Svc::FprimeDeframing deframing;
      }

    }

    // ----------------------------------------------------------------------
    // Component instances
    // ----------------------------------------------------------------------

    // SG1
    SignalGen SG1(FW_OPTIONAL_NAME("SG1"));

    // SG2
    SignalGen SG2(FW_OPTIONAL_NAME("SG2"));

    // SG3
    SignalGen SG3(FW_OPTIONAL_NAME("SG3"));

    // SG4
    SignalGen SG4(FW_OPTIONAL_NAME("SG4"));

    // SG5
    SignalGen SG5(FW_OPTIONAL_NAME("SG5"));

    // blockDrv
    // Declared in RefTopologyDefs.cpp

    // chanTlm
    Svc::TlmChan chanTlm(FW_OPTIONAL_NAME("chanTlm"));

    // cmdDisp
    Svc::CommandDispatcher cmdDisp(FW_OPTIONAL_NAME("cmdDisp"));

    // cmdSeq
    Svc::CmdSequencer cmdSeq(FW_OPTIONAL_NAME("cmdSeq"));

    // comm
    Drv::TcpClientComponentImpl comm(FW_OPTIONAL_NAME("comm"));

    // downlink
    Svc::FramerComponentImpl downlink(FW_OPTIONAL_NAME("downlink"));

    // eventLogger
    Svc::ActiveLogger eventLogger(FW_OPTIONAL_NAME("eventLogger"));

    // fatalAdapter
    Svc::AssertFatalAdapterComponentImpl fatalAdapter(FW_OPTIONAL_NAME("fatalAdapter"));

    // fatalHandler
    Svc::FatalHandlerComponentImpl fatalHandler(FW_OPTIONAL_NAME("fatalHandler"));

    // fileDownlink
    Svc::FileDownlink fileDownlink(FW_OPTIONAL_NAME("fileDownlink"));

    // fileManager
    Svc::FileManager fileManager(FW_OPTIONAL_NAME("fileManager"));

    // fileUplink
    Svc::FileUplink fileUplink(FW_OPTIONAL_NAME("fileUplink"));

    // fileUplinkBufferManager
    Svc::BufferManagerComponentImpl fileUplinkBufferManager(FW_OPTIONAL_NAME("fileUplinkBufferManager"));

    // health
    Svc::HealthImpl health(FW_OPTIONAL_NAME("health"));

    // linuxTime
    Svc::LinuxTimeImpl linuxTime(FW_OPTIONAL_NAME("linuxTime"));

    // pingRcvr
    PingReceiver pingRcvr(FW_OPTIONAL_NAME("pingRcvr"));

    // prmDb
    Svc::PrmDbImpl prmDb(FW_OPTIONAL_NAME("prmDb"), "PrmDb.dat");

    // rateGroup1Comp
    Svc::ActiveRateGroupImpl rateGroup1Comp(
        FW_OPTIONAL_NAME("rateGroup1Comp"),
        ConfigObjects::rateGroup1Comp::context,
        FW_NUM_ARRAY_ELEMENTS(ConfigObjects::rateGroup1Comp::context)
    );

    // rateGroup2Comp
    Svc::ActiveRateGroupImpl rateGroup2Comp(
        FW_OPTIONAL_NAME("rateGroup2Comp"),
        ConfigObjects::rateGroup2Comp::context,
        FW_NUM_ARRAY_ELEMENTS(ConfigObjects::rateGroup2Comp::context)
    );

    // rateGroup3Comp
    Svc::ActiveRateGroupImpl rateGroup3Comp(
        FW_OPTIONAL_NAME("rateGroup3Comp"),
        ConfigObjects::rateGroup3Comp::context,
        FW_NUM_ARRAY_ELEMENTS(ConfigObjects::rateGroup3Comp::context)
    );

    // rateGroupDriverComp
    Svc::RateGroupDriverImpl rateGroupDriverComp(
        FW_OPTIONAL_NAME("rateGroupDriverComp"),
        ConfigObjects::rateGroupDriverComp::rgDivs,
        FW_NUM_ARRAY_ELEMENTS(ConfigObjects::rateGroupDriverComp::rgDivs)
    );

    // recvBuffComp
    RecvBuffImpl recvBuffComp(FW_OPTIONAL_NAME("recvBuffComp"));

    // sendBuffComp
    SendBuffImpl sendBuffComp(FW_OPTIONAL_NAME("sendBuffComp"));

    // staticMemory
    Svc::StaticMemoryComponentImpl staticMemory(FW_OPTIONAL_NAME("staticMemory"));

    // textLogger
    Svc::ConsoleTextLoggerImpl textLogger(FW_OPTIONAL_NAME("textLogger"));

    // uplink
    Svc::DeframerComponentImpl uplink(FW_OPTIONAL_NAME("uplink"));

    // ----------------------------------------------------------------------
    // Private functions
    // ----------------------------------------------------------------------

    // Initialize components
    void initComponents(const TopologyState& state) {
      SG1.init(QueueSizes::SG1, InstanceIds::SG1);
      SG2.init(QueueSizes::SG2, InstanceIds::SG2);
      SG3.init(QueueSizes::SG3, InstanceIds::SG3);
      SG4.init(QueueSizes::SG4, InstanceIds::SG4);
      SG5.init(QueueSizes::SG5, InstanceIds::SG5);
      blockDrv.init(QueueSizes::blockDrv, InstanceIds::blockDrv);
      chanTlm.init(QueueSizes::chanTlm, InstanceIds::chanTlm);
      cmdDisp.init(QueueSizes::cmdDisp, InstanceIds::cmdDisp);
      cmdSeq.init(QueueSizes::cmdSeq, InstanceIds::cmdSeq);
      comm.init(InstanceIds::comm);
      downlink.init(InstanceIds::downlink);
      eventLogger.init(QueueSizes::eventLogger, InstanceIds::eventLogger);
      fatalAdapter.init(InstanceIds::fatalAdapter);
      fatalHandler.init(InstanceIds::fatalHandler);
      fileDownlink.init(QueueSizes::fileDownlink, InstanceIds::fileDownlink);
      fileManager.init(QueueSizes::fileManager, InstanceIds::fileManager);
      fileUplink.init(QueueSizes::fileUplink, InstanceIds::fileUplink);
      fileUplinkBufferManager.init(InstanceIds::fileUplinkBufferManager);
      health.init(QueueSizes::health, InstanceIds::health);
      linuxTime.init(InstanceIds::linuxTime);
      pingRcvr.init(QueueSizes::pingRcvr, InstanceIds::pingRcvr);
      prmDb.init(QueueSizes::prmDb, InstanceIds::prmDb);
      rateGroup1Comp.init(QueueSizes::rateGroup1Comp, InstanceIds::rateGroup1Comp);
      rateGroup2Comp.init(QueueSizes::rateGroup2Comp, InstanceIds::rateGroup2Comp);
      rateGroup3Comp.init(QueueSizes::rateGroup3Comp, InstanceIds::rateGroup3Comp);
      rateGroupDriverComp.init();
      recvBuffComp.init();
      sendBuffComp.init(QueueSizes::sendBuffComp, InstanceIds::sendBuffComp);
      staticMemory.init(InstanceIds::staticMemory);
      textLogger.init();
      uplink.init(InstanceIds::uplink);
    }

    // Configure components
    void configComponents(const TopologyState& state) {
      cmdSeq.allocateBuffer(
          0,
          Allocation::mallocator,
          ConfigConstants::cmdSeq::BUFFER_SIZE
      );
      downlink.setup(ConfigObjects::downlink::framing);
      fileDownlink.configure(
          ConfigConstants::fileDownlink::TIMEOUT,
          ConfigConstants::fileDownlink::COOLDOWN,
          ConfigConstants::fileDownlink::CYCLE_TIME,
          ConfigConstants::fileDownlink::FILE_QUEUE_DEPTH
      );
      Svc::BufferManagerComponentImpl::BufferBins upBuffMgrBins;
      memset(&upBuffMgrBins, 0, sizeof(upBuffMgrBins));
      {
        using namespace ConfigConstants::fileUplinkBufferManager;
        upBuffMgrBins.bins[0].bufferSize = STORE_SIZE;
        upBuffMgrBins.bins[0].numBuffers = QUEUE_SIZE;
        fileUplinkBufferManager.setup(
            MGR_ID,
            0,
            Allocation::mallocator,
            upBuffMgrBins
        );
      }
      health.setPingEntries(
          ConfigObjects::health::pingEntries,
          FW_NUM_ARRAY_ELEMENTS(ConfigObjects::health::pingEntries),
          ConfigConstants::health::WATCHDOG_CODE
      );
      uplink.setup(ConfigObjects::uplink::deframing);
    }

    // Set component base Ids
    void setBaseIds() {
      blockDrv.setIdBase(BaseIds::blockDrv);
      rateGroup1Comp.setIdBase(BaseIds::rateGroup1Comp);
      rateGroup2Comp.setIdBase(BaseIds::rateGroup2Comp);
      rateGroup3Comp.setIdBase(BaseIds::rateGroup3Comp);
      cmdDisp.setIdBase(BaseIds::cmdDisp);
      cmdSeq.setIdBase(BaseIds::cmdSeq);
      fileDownlink.setIdBase(BaseIds::fileDownlink);
      fileManager.setIdBase(BaseIds::fileManager);
      fileUplink.setIdBase(BaseIds::fileUplink);
      pingRcvr.setIdBase(BaseIds::pingRcvr);
      eventLogger.setIdBase(BaseIds::eventLogger);
      chanTlm.setIdBase(BaseIds::chanTlm);
      prmDb.setIdBase(BaseIds::prmDb);
      health.setIdBase(BaseIds::health);
      SG1.setIdBase(BaseIds::SG1);
      SG2.setIdBase(BaseIds::SG2);
      SG3.setIdBase(BaseIds::SG3);
      SG4.setIdBase(BaseIds::SG4);
      SG5.setIdBase(BaseIds::SG5);
      sendBuffComp.setIdBase(BaseIds::sendBuffComp);
      comm.setIdBase(BaseIds::comm);
      downlink.setIdBase(BaseIds::downlink);
      fatalAdapter.setIdBase(BaseIds::fatalAdapter);
      fatalHandler.setIdBase(BaseIds::fatalHandler);
      fileUplinkBufferManager.setIdBase(BaseIds::fileUplinkBufferManager);
      linuxTime.setIdBase(BaseIds::linuxTime);
      rateGroupDriverComp.setIdBase(BaseIds::rateGroupDriverComp);
      recvBuffComp.setIdBase(BaseIds::recvBuffComp);
      staticMemory.setIdBase(BaseIds::staticMemory);
      textLogger.setIdBase(BaseIds::textLogger);
      uplink.setIdBase(BaseIds::uplink);
    }

    // Connect components
    void connectComponents() {

      // Command
      cmdDisp.set_compCmdSend_OutputPort(
          0,
          SG1.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          1,
          SG2.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          2,
          SG3.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          3,
          SG4.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          4,
          SG5.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          5,
          cmdDisp.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          6,
          cmdSeq.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          7,
          eventLogger.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          8,
          fileDownlink.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          9,
          fileManager.get_cmdIn_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          10,
          health.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          11,
          pingRcvr.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          12,
          prmDb.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          13,
          recvBuffComp.get_CmdDisp_InputPort(0)
      );
      cmdDisp.set_compCmdSend_OutputPort(
          14,
          sendBuffComp.get_CmdDisp_InputPort(0)
      );

      // CommandRegistration
      SG1.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(0)
      );
      SG2.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(1)
      );
      SG3.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(2)
      );
      SG4.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(3)
      );
      SG5.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(4)
      );
      cmdDisp.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(5)
      );
      cmdSeq.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(6)
      );
      eventLogger.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(7)
      );
      fileDownlink.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(8)
      );
      fileManager.set_cmdRegOut_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(9)
      );
      health.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(10)
      );
      pingRcvr.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(11)
      );
      prmDb.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(12)
      );
      recvBuffComp.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(13)
      );
      sendBuffComp.set_CmdReg_OutputPort(
          0,
          cmdDisp.get_compCmdReg_InputPort(14)
      );

      // CommandResponse
      SG1.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      SG2.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      SG3.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      SG4.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      SG5.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      cmdDisp.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      cmdSeq.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      eventLogger.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      fileDownlink.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      fileManager.set_cmdResponseOut_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      health.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      pingRcvr.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      prmDb.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      recvBuffComp.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );
      sendBuffComp.set_CmdStatus_OutputPort(
          0,
          cmdDisp.get_compCmdStat_InputPort(0)
      );

      // Downlink
      chanTlm.set_PktSend_OutputPort(
          0,
          downlink.get_comIn_InputPort(0)
      );
      comm.set_deallocate_OutputPort(
          0,
          staticMemory.get_bufferDeallocate_InputPort(0)
      );
      downlink.set_bufferDeallocate_OutputPort(
          0,
          fileDownlink.get_bufferReturn_InputPort(0)
      );
      downlink.set_framedAllocate_OutputPort(
          0,
          staticMemory.get_bufferAllocate_InputPort(0)
      );
      downlink.set_framedOut_OutputPort(
          0,
          comm.get_send_InputPort(0)
      );
      eventLogger.set_PktSend_OutputPort(
          0,
          downlink.get_comIn_InputPort(0)
      );
      fileDownlink.set_bufferSendOut_OutputPort(
          0,
          downlink.get_bufferIn_InputPort(0)
      );

      // Events
      SG1.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      SG2.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      SG3.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      SG4.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      SG5.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      cmdDisp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      cmdSeq.set_logOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      eventLogger.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      fatalAdapter.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      fileDownlink.set_eventOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      fileManager.set_eventOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      fileUplink.set_eventOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      fileUplinkBufferManager.set_eventOut_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      health.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      pingRcvr.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      prmDb.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      rateGroup1Comp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      rateGroup2Comp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      rateGroup3Comp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      recvBuffComp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );
      sendBuffComp.set_Log_OutputPort(
          0,
          eventLogger.get_LogRecv_InputPort(0)
      );

      // FaultProtection
      eventLogger.set_FatalAnnounce_OutputPort(
          0,
          fatalHandler.get_FatalReceive_InputPort(0)
      );

      // Health
      blockDrv.set_PingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(0)
      );
      chanTlm.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(1)
      );
      cmdDisp.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(2)
      );
      cmdSeq.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(3)
      );
      eventLogger.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(4)
      );
      fileDownlink.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(5)
      );
      fileManager.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(6)
      );
      fileUplink.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(7)
      );
      health.set_PingSend_OutputPort(
          0,
          blockDrv.get_PingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          1,
          chanTlm.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          2,
          cmdDisp.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          3,
          cmdSeq.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          4,
          eventLogger.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          5,
          fileDownlink.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          6,
          fileManager.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          7,
          fileUplink.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          8,
          pingRcvr.get_PingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          9,
          prmDb.get_pingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          10,
          rateGroup1Comp.get_PingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          11,
          rateGroup2Comp.get_PingIn_InputPort(0)
      );
      health.set_PingSend_OutputPort(
          12,
          rateGroup3Comp.get_PingIn_InputPort(0)
      );
      pingRcvr.set_PingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(8)
      );
      prmDb.set_pingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(9)
      );
      rateGroup1Comp.set_PingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(10)
      );
      rateGroup2Comp.set_PingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(11)
      );
      rateGroup3Comp.set_PingOut_OutputPort(
          0,
          health.get_PingReturn_InputPort(12)
      );

      // Parameters
      recvBuffComp.set_ParamGet_OutputPort(
          0,
          prmDb.get_getPrm_InputPort(0)
      );
      recvBuffComp.set_ParamSet_OutputPort(
          0,
          prmDb.get_setPrm_InputPort(0)
      );
      sendBuffComp.set_ParamGet_OutputPort(
          0,
          prmDb.get_getPrm_InputPort(0)
      );
      sendBuffComp.set_ParamSet_OutputPort(
          0,
          prmDb.get_setPrm_InputPort(0)
      );

      // RateGroups
      blockDrv.set_CycleOut_OutputPort(
          0,
          rateGroupDriverComp.get_CycleIn_InputPort(0)
      );
      rateGroup1Comp.set_RateGroupMemberOut_OutputPort(
          0,
          SG1.get_schedIn_InputPort(0)
      );
      rateGroup1Comp.set_RateGroupMemberOut_OutputPort(
          1,
          SG2.get_schedIn_InputPort(0)
      );
      rateGroup1Comp.set_RateGroupMemberOut_OutputPort(
          2,
          chanTlm.get_Run_InputPort(0)
      );
      rateGroup1Comp.set_RateGroupMemberOut_OutputPort(
          3,
          fileDownlink.get_Run_InputPort(0)
      );
      rateGroup2Comp.set_RateGroupMemberOut_OutputPort(
          0,
          cmdSeq.get_schedIn_InputPort(0)
      );
      rateGroup2Comp.set_RateGroupMemberOut_OutputPort(
          1,
          sendBuffComp.get_SchedIn_InputPort(0)
      );
      rateGroup2Comp.set_RateGroupMemberOut_OutputPort(
          2,
          SG3.get_schedIn_InputPort(0)
      );
      rateGroup2Comp.set_RateGroupMemberOut_OutputPort(
          3,
          SG4.get_schedIn_InputPort(0)
      );
      rateGroup3Comp.set_RateGroupMemberOut_OutputPort(
          0,
          health.get_Run_InputPort(0)
      );
      rateGroup3Comp.set_RateGroupMemberOut_OutputPort(
          1,
          SG5.get_schedIn_InputPort(0)
      );
      rateGroup3Comp.set_RateGroupMemberOut_OutputPort(
          2,
          blockDrv.get_Sched_InputPort(0)
      );
      rateGroup3Comp.set_RateGroupMemberOut_OutputPort(
          3,
          fileUplinkBufferManager.get_schedIn_InputPort(0)
      );
      rateGroupDriverComp.set_CycleOut_OutputPort(
          0,
          rateGroup1Comp.get_CycleIn_InputPort(0)
      );
      rateGroupDriverComp.set_CycleOut_OutputPort(
          1,
          rateGroup2Comp.get_CycleIn_InputPort(0)
      );
      rateGroupDriverComp.set_CycleOut_OutputPort(
          2,
          rateGroup3Comp.get_CycleIn_InputPort(0)
      );

      // Ref
      blockDrv.set_BufferOut_OutputPort(
          0,
          recvBuffComp.get_Data_InputPort(0)
      );
      sendBuffComp.set_Data_OutputPort(
          0,
          blockDrv.get_BufferIn_InputPort(0)
      );

      // Sequencer
      cmdDisp.set_seqCmdStatus_OutputPort(
          0,
          cmdSeq.get_cmdResponseIn_InputPort(0)
      );
      cmdSeq.set_comCmdOut_OutputPort(
          0,
          cmdDisp.get_seqCmdBuff_InputPort(0)
      );

      // Telemetry
      SG1.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      SG2.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      SG3.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      SG4.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      SG5.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      blockDrv.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      cmdDisp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      cmdSeq.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      fileDownlink.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      fileManager.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      fileUplink.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      fileUplinkBufferManager.set_tlmOut_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      health.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      pingRcvr.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      rateGroup1Comp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      rateGroup2Comp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      rateGroup3Comp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      recvBuffComp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );
      sendBuffComp.set_Tlm_OutputPort(
          0,
          chanTlm.get_TlmRecv_InputPort(0)
      );

      // TextEvents
      SG1.set_logTextOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      SG2.set_logTextOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      SG3.set_logTextOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      SG4.set_logTextOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      SG5.set_logTextOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      cmdDisp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      cmdSeq.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      eventLogger.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      fatalAdapter.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      fileDownlink.set_textEventOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      fileManager.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      fileUplink.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      fileUplinkBufferManager.set_textEventOut_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      health.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      pingRcvr.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      prmDb.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      rateGroup1Comp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      rateGroup2Comp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      rateGroup3Comp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      recvBuffComp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );
      sendBuffComp.set_LogText_OutputPort(
          0,
          textLogger.get_TextLogger_InputPort(0)
      );

      // Time
      SG1.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      SG2.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      SG3.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      SG4.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      SG5.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      blockDrv.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      cmdDisp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      cmdSeq.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      downlink.set_timeGet_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      eventLogger.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      fatalAdapter.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      fileDownlink.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      fileManager.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      fileUplink.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      fileUplinkBufferManager.set_timeCaller_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      health.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      pingRcvr.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      prmDb.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      rateGroup1Comp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      rateGroup2Comp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      rateGroup3Comp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      recvBuffComp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );
      sendBuffComp.set_Time_OutputPort(
          0,
          linuxTime.get_timeGetPort_InputPort(0)
      );

      // Uplink
      cmdDisp.set_seqCmdStatus_OutputPort(
          1,
          uplink.get_cmdResponseIn_InputPort(0)
      );
      comm.set_allocate_OutputPort(
          0,
          staticMemory.get_bufferAllocate_InputPort(1)
      );
      comm.set_recv_OutputPort(
          0,
          uplink.get_framedIn_InputPort(0)
      );
      fileUplink.set_bufferSendOut_OutputPort(
          0,
          fileUplinkBufferManager.get_bufferSendIn_InputPort(0)
      );
      uplink.set_bufferAllocate_OutputPort(
          0,
          fileUplinkBufferManager.get_bufferGetCallee_InputPort(0)
      );
      uplink.set_bufferDeallocate_OutputPort(
          0,
          fileUplinkBufferManager.get_bufferSendIn_InputPort(0)
      );
      uplink.set_bufferOut_OutputPort(
          0,
          fileUplink.get_bufferSendIn_InputPort(0)
      );
      uplink.set_comOut_OutputPort(
          0,
          cmdDisp.get_seqCmdBuff_InputPort(1)
      );
      uplink.set_framedDeallocate_OutputPort(
          0,
          staticMemory.get_bufferDeallocate_InputPort(1)
      );

    }

    // Register commands
    void regCommands() {
      SG1.regCommands();
      SG2.regCommands();
      SG3.regCommands();
      SG4.regCommands();
      SG5.regCommands();
      cmdDisp.regCommands();
      cmdSeq.regCommands();
      eventLogger.regCommands();
      fileDownlink.regCommands();
      fileManager.regCommands();
      health.regCommands();
      pingRcvr.regCommands();
      prmDb.regCommands();
      recvBuffComp.regCommands();
      sendBuffComp.regCommands();
    }

    // Read parameters
    void readParameters() {
      prmDb.readParamFile();
    }

    // Load parameters
    void loadParameters() {
      recvBuffComp.loadParameters();
      sendBuffComp.loadParameters();
    }

    // Start tasks
    void startTasks(const TopologyState& state) {
      blockDrv.start(
        TaskIds::blockDrv,
        Priorities::blockDrv,
        StackSizes::blockDrv
      );
      chanTlm.start(
        TaskIds::chanTlm,
        Priorities::chanTlm,
        StackSizes::chanTlm
      );
      cmdDisp.start(
        TaskIds::cmdDisp,
        Priorities::cmdDisp,
        StackSizes::cmdDisp
      );
      cmdSeq.start(
        TaskIds::cmdSeq,
        Priorities::cmdSeq,
        StackSizes::cmdSeq
      );
      // Initialize socket server if and only if there is a valid specification
      if (state.hostName != NULL && state.portNumber != 0) {
          Fw::EightyCharString name("ReceiveTask");
          // Uplink is configured for receive so a socket task is started
          comm.configure(state.hostName, state.portNumber);
          comm.startSocketTask(
              name,
              ConfigConstants::comm::PRIORITY,
              ConfigConstants::comm::STACK_SIZE
          );
      }
      eventLogger.start(
        TaskIds::eventLogger,
        Priorities::eventLogger,
        StackSizes::eventLogger
      );
      fileDownlink.start(
        TaskIds::fileDownlink,
        Priorities::fileDownlink,
        StackSizes::fileDownlink
      );
      fileManager.start(
        TaskIds::fileManager,
        Priorities::fileManager,
        StackSizes::fileManager
      );
      fileUplink.start(
        TaskIds::fileUplink,
        Priorities::fileUplink,
        StackSizes::fileUplink
      );
      pingRcvr.start(
        TaskIds::pingRcvr,
        Priorities::pingRcvr,
        StackSizes::pingRcvr
      );
      prmDb.start(
        TaskIds::prmDb,
        Priorities::prmDb,
        StackSizes::prmDb
      );
      rateGroup1Comp.start(
        TaskIds::rateGroup1Comp,
        Priorities::rateGroup1Comp,
        StackSizes::rateGroup1Comp
      );
      rateGroup2Comp.start(
        TaskIds::rateGroup2Comp,
        Priorities::rateGroup2Comp,
        StackSizes::rateGroup2Comp
      );
      rateGroup3Comp.start(
        TaskIds::rateGroup3Comp,
        Priorities::rateGroup3Comp,
        StackSizes::rateGroup3Comp
      );
    }

    // Stop tasks
    void stopTasks(const TopologyState& state) {
      blockDrv.exit();
      chanTlm.exit();
      cmdDisp.exit();
      cmdSeq.exit();
      eventLogger.exit();
      fileDownlink.exit();
      fileManager.exit();
      fileUplink.exit();
      pingRcvr.exit();
      prmDb.exit();
      rateGroup1Comp.exit();
      rateGroup2Comp.exit();
      rateGroup3Comp.exit();
    }

    // Free threads
    void freeThreads(const TopologyState& state) {
      (void) blockDrv.ActiveComponentBase::join(NULL);
      (void) chanTlm.ActiveComponentBase::join(NULL);
      (void) cmdDisp.ActiveComponentBase::join(NULL);
      (void) cmdSeq.ActiveComponentBase::join(NULL);
      comm.stopSocketTask();
      (void) comm.joinSocketTask(NULL);
      (void) eventLogger.ActiveComponentBase::join(NULL);
      (void) fileDownlink.ActiveComponentBase::join(NULL);
      (void) fileManager.ActiveComponentBase::join(NULL);
      (void) fileUplink.ActiveComponentBase::join(NULL);
      (void) pingRcvr.ActiveComponentBase::join(NULL);
      (void) prmDb.ActiveComponentBase::join(NULL);
      (void) rateGroup1Comp.ActiveComponentBase::join(NULL);
      (void) rateGroup2Comp.ActiveComponentBase::join(NULL);
      (void) rateGroup3Comp.ActiveComponentBase::join(NULL);
    }

    // Tear down components
    void tearDownComponents(const TopologyState& state) {
      cmdSeq.deallocateBuffer(Allocation::mallocator);
      fileUplinkBufferManager.cleanup();
    }

  }

  // ----------------------------------------------------------------------
  // Public interface functions
  // ----------------------------------------------------------------------

  void setup(const TopologyState& state) {
    initComponents(state);
    configComponents(state);
    setBaseIds();
    connectComponents();
    regCommands();
    readParameters();
    loadParameters();
    startTasks(state);
  }

  void teardown(const TopologyState& state) {
    stopTasks(state);
    freeThreads(state);
    tearDownComponents(state);
  }

}
