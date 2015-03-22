#ifndef SYIDEF_H
#define SYIDEF_H

#define SYI$C_EXETYPE 1
#define SYI$C_FLDTYPE 2
#define SYI$C_RSDTYPE 3
#define SYI$_VERSION 4096
#define SYI$_SID 4097
#define SYI$_PFCDEFAULT 4098
#define SYI$_PAGTBLPFC 4099
#define SYI$_SYSPFC 4100
#define SYI$_KFILSTCNT 4101
#define SYI$_GBLSECTIONS 4102
#define SYI$_GBLPAGES 4103
#define SYI$_GBLPAGFIL 4104
#define SYI$_MAXPROCESSCNT 4105
#define SYI$_PIXSCAN 4106
#define SYI$_PROCSECTCNT 4107
#define SYI$_MINWSCNT 4108
#define SYI$_PAGFILCNT 4109
#define SYI$_SWPFILCNT 4110
#define SYI$_SYSMWCNT 4111
#define SYI$_INTSTKPAGES 4112
#define SYI$_DLCKEXTRASTK 4113
#define SYI$_BALSETCNT 4114
#define SYI$_IRPCOUNT 4115
#define SYI$_IRPCOUNTV 4116
#define SYI$_WSMAX 4117
#define SYI$_NPAGEDYN 4118
#define SYI$_NPAGEVIR 4119
#define SYI$_PAGEDYN 4120
#define SYI$_VIRTUALPAGECNT 4121
#define SYI$_SPTREQ 4122
#define SYI$_EXUSRSTK 4123
#define SYI$_LRPCOUNT 4124
#define SYI$_LRPCOUNTV 4125
#define SYI$_LRPSIZE 4126
#define SYI$_LRPMIN 4127
#define SYI$_SRPCOUNT 4128
#define SYI$_SRPCOUNTV 4129
#define SYI$_SRPSIZE 4130
#define SYI$_SRPMIN 4131
#define SYI$_CHANNELCNT 4132
#define SYI$_PIOPAGES 4133
#define SYI$_CTLPAGES 4134
#define SYI$_CTLIMGLIM 4135
#define SYI$_IMGIOCNT 4136
#define SYI$_QUANTUM 4137
#define SYI$_MPW_WRTCLUSTER 4138
#define SYI$_MPW_HILIMIT 4139
#define SYI$_MPW_LOLIMIT 4140
#define SYI$_MPW_PRIO 4141
#define SYI$_SWP_PRIO 4142
#define SYI$_MPW_THRESH 4143
#define SYI$_MPW_WAITLIMIT 4144
#define SYI$_TBSKIPWSL 4145
#define SYI$_PHYSICALPAGES 4146
#define SYI$_PFRATL 4147
#define SYI$_PFRATH 4148
#define SYI$_PFRATL_SYS 4149
#define SYI$_WSINC 4150
#define SYI$_WSDEC 4151
#define SYI$_AWSMIN 4152
#define SYI$_AWSTIME 4153
#define SYI$_SWPRATE 4154
#define SYI$_SWPOUTPGCNT 4155
#define SYI$_SWPALLOCINC 4156
#define SYI$_IOTA 4157
#define SYI$_LONGWAIT 4158
#define SYI$_SWPFAIL 4159
#define SYI$_VMSD1 4160
#define SYI$_VMSD2 4161
#define SYI$_VMSD3 4162
#define SYI$_VMSD4 4163
#define SYI$_VMS5 4164
#define SYI$_VMS6 4165
#define SYI$_VMS7 4166
#define SYI$_VMS8 4167
#define SYI$_USERD1 4168
#define SYI$_USERD2 4169
#define SYI$_USER3 4170
#define SYI$_USER4 4171
#define SYI$_EXTRACPU 4172
#define SYI$_MAXSYSGROUP 4173
#define SYI$_MVTIMEOUT 4174
#define SYI$_MAXBUF 4175
#define SYI$_DEFMBXBUFQUO 4176
#define SYI$_DEFMBXMXMSG 4177
#define SYI$_DEFMBXNUMMSG 4178
#define SYI$_FREELIM 4179
#define SYI$_FREEGOAL 4180
#define SYI$_GROWLIM 4181
#define SYI$_BORROWLIM 4182
#define SYI$_LOCKRETRY 4183
#define SYI$_XFMAXRATE 4184
#define SYI$_LAMAPREGS 4185
#define SYI$_REALTIME_SPTS 4186
#define SYI$_CLISYMTBL 4187
#define SYI$_LOCKIDTBL 4188
#define SYI$_RESHASHTBL 4189
#define SYI$_DEADLOCK_WAIT 4190
#define SYI$_SCSBUFFCNT 4191
#define SYI$_SCSCONNCNT 4192
#define SYI$_SCSRESPCNT 4193
#define SYI$_SCSMAXDG 4194
#define SYI$_SCSMAXMSG 4195
#define SYI$_SCSFLOWCUSH 4196
#define SYI$_SCSSYSTEMID 4197
#define SYI$_SCSSYSTEMIDH 4198
#define SYI$_SCSNODE 4199
#define SYI$_PRCPOLINTERVAL 4201
#define SYI$_PASTIMOUT 4202
#define SYI$_PASTDGBUF 4203
#define SYI$_PANUMPOLL 4204
#define SYI$_PAPOLLINTERVAL 4205
#define SYI$_PAPOOLINTERVAL 4206
#define SYI$_TIMEPROMPTWAIT 4207
#define SYI$_UDABURSTRATE 4208
#define SYI$_LNMSHASHTBL 4209
#define SYI$_LNMPHASHTBL 4210
#define SYI$_TTY_SCANDELTA 4211
#define SYI$_TTY_DIALTYPE 4212
#define SYI$_TTY_SPEED 4213
#define SYI$_TTY_RSPEED 4214
#define SYI$_TTY_PARITY 4215
#define SYI$_TTY_BUF 4216
#define SYI$_TTY_DEFCHAR 4217
#define SYI$_TTY_DEFCHAR2 4218
#define SYI$_TTY_TYPAHDSZ 4219
#define SYI$_TTY_ALTYPAHD 4220
#define SYI$_TTY_ALTALARM 4221
#define SYI$_TTY_DMASIZE 4222
#define SYI$_TTY_PROT 4223
#define SYI$_TTY_OWNER 4224
#define SYI$_TTY_CLASSNAME 4225
#define SYI$_TTY_SILOTIME 4226
#define SYI$_TTY_DEFPORT 4227
#define SYI$_RMS_DFMBC 4228
#define SYI$_RMS_DFMBFSDK 4229
#define SYI$_RMS_DFMBFSMT 4230
#define SYI$_RMS_DFMBFSUR 4231
#define SYI$_RMS_DFMBFREL 4232
#define SYI$_RMS_DFMBFIDX 4233
#define SYI$_RMS_DFMBFHSH 4234
#define SYI$_RMS_PROLOGUE 4235
#define SYI$_RMS_EXTEND_SIZE 4236
#define SYI$_RMS_FILEPROT 4237
#define SYI$_PQL_DASTLM 4238
#define SYI$_PQL_MASTLM 4239
#define SYI$_PQL_DBIOLM 4240
#define SYI$_PQL_MBIOLM 4241
#define SYI$_PQL_DBYTLM 4242
#define SYI$_PQL_MBYTLM 4243
#define SYI$_PQL_DCPULM 4244
#define SYI$_PQL_MCPULM 4245
#define SYI$_PQL_DDIOLM 4246
#define SYI$_PQL_MDIOLM 4247
#define SYI$_PQL_DFILLM 4248
#define SYI$_PQL_MFILLM 4249
#define SYI$_PQL_DPGFLQUOTA 4250
#define SYI$_PQL_MPGFLQUOTA 4251
#define SYI$_PQL_DPRCLM 4252
#define SYI$_PQL_MPRCLM 4253
#define SYI$_PQL_DTQELM 4254
#define SYI$_PQL_MTQELM 4255
#define SYI$_PQL_DWSDEFAULT 4256
#define SYI$_PQL_MWSDEFAULT 4257
#define SYI$_PQL_DWSQUOTA 4258
#define SYI$_PQL_MWSQUOTA 4259
#define SYI$_PQL_DWSEXTENT 4260
#define SYI$_PQL_MWSEXTENT 4261
#define SYI$_PQL_DENQLM 4262
#define SYI$_PQL_MENQLM 4263
#define SYI$_ACP_MAPCACHE 4264
#define SYI$_ACP_HDRCACHE 4265
#define SYI$_ACP_DIRCACHE 4266
#define SYI$_ACP_WORKSET 4267
#define SYI$_ACP_FIDCACHE 4268
#define SYI$_ACP_EXTCACHE 4269
#define SYI$_ACP_EXTLIMIT 4270
#define SYI$_ACP_QUOCACHE 4271
#define SYI$_ACP_SYSACC 4272
#define SYI$_ACP_MAXREAD 4273
#define SYI$_ACP_WINDOW 4274
#define SYI$_ACP_WRITEBACK 4275
#define SYI$_ACP_DATACHECK 4276
#define SYI$_ACP_BASEPRIO 4277
#define SYI$_ACP_SWAPFLGS 4278
#define SYI$_DEFPRI 4279
#define SYI$_IJOBLIM 4280
#define SYI$_BJOBLIM 4281
#define SYI$_NJOBLIM 4282
#define SYI$_RJOBLIM 4283
#define SYI$_QUORUM 4284
#define SYI$_VOTES 4285
#define SYI$_RECNXINTERVAL 4286
#define SYI$_BOOTTIME 4287
#define SYI$_LOCKIDTBL_MAX 4288
#define SYI$_TAILORED 4289
#define SYI$_STARTUP_P1 4290
#define SYI$_STARTUP_P2 4291
#define SYI$_STARTUP_P3 4292
#define SYI$_STARTUP_P4 4293
#define SYI$_STARTUP_P5 4294
#define SYI$_STARTUP_P6 4295
#define SYI$_STARTUP_P7 4296
#define SYI$_STARTUP_P8 4297
#define SYI$_CLUSTER_NODES 4298
#define SYI$_CLUSTER_VOTES 4299
#define SYI$_CLUSTER_QUORUM 4300
#define SYI$_CLUSTER_FSYSID 4301
#define SYI$_CLUSTER_FTIME 4302
#define SYI$_CLUSTER_MEMBER 4303
#define SYI$_NODE_CSID 4304
#define SYI$_NODE_VOTES 4305
#define SYI$_NODE_QUORUM 4306
#define SYI$_NODE_SYSTEMID 4307
#define SYI$_NODE_SWINCARN 4308
#define SYI$_NODE_SWTYPE 4309
#define SYI$_NODE_SWVERS 4310
#define SYI$_NODE_HWTYPE 4311
#define SYI$_NODE_HWVERS 4312
#define SYI$_NODENAME 4313
#define SYI$_ARCHFLAG 4314
#define SYI$_SCS_EXISTS 4315
#define SYI$_DISK_QUORUM 4316
#define SYI$_XSID 4317
#define SYI$_PAMAXPORT 4320
#define SYI$_PASANITY 4321
#define SYI$_DEFQUEPRI 4322
#define SYI$_MAXQUEPRI 4323
#define SYI$_QDSKINTERVAL 4324
#define SYI$_ALLOCLASS 4325
#define SYI$_LGI_RETRY_LIM 4326
#define SYI$_LGI_RETRY_TMO 4327
#define SYI$_LGI_BRK_LIM 4328
#define SYI$_LGI_BRK_TMO 4329
#define SYI$_LGI_HID_TIM 4330
#define SYI$_LGI_PWD_TMO 4331
#define SYI$_PQL_DJTQUOTA 4332
#define SYI$_PQL_MJTQUOTA 4333
#define SYI$_VAXCLUSTER 4334
#define SYI$_LOCKDIRWT 4335
#define SYI$_QDSKVOTES 4336
#define SYI$_DORMANTWAIT 4337
#define SYI$_PAGEFILE_PAGE 4338
#define SYI$_SWAPFILE_PAGE 4339
#define SYI$_PAGEFILE_FREE 4340
#define SYI$_SWAPFILE_FREE 4341
#define SYI$_TTY_TIMEOUT 4342
#define SYI$_TTY_AUTOCHAR 4343
#define SYI$_PANOPOLL 4344
#define SYI$_PE1 4345
#define SYI$_PE2 4346
#define SYI$_PE3 4347
#define SYI$_PE4 4348
#define SYI$_PE5 4349
#define SYI$_PE6 4350
#define SYI$_RMS_GBLBUFQUO 4351
#define SYI$_RMS_DFNBC 4352
#define SYI$_ACP_DINDXCACHE 4353
#define SYI$_MAXATTACHPRI 4354
#define SYI$_SMP_CPUS 4355
#define SYI$_SMP_CPUSH 4356
#define SYI$_FALLBACK_MODE 4357
#define SYI$_MPW_LOWAITLIMIT 4358
#define SYI$_MPW_IOLIMIT 4359
#define SYI$_S0_PAGING 4360
#define SYI$_HW_MODEL 4361
#define SYI$_HW_NAME 4362
#define SYI$_SCH_CTLFLAGS 4363
#define SYI$_NODE_EVOTES 4364
#define SYI$_CLUSTER_EVOTES 4365
#define SYI$_MULTIPROCESSING 4366
#define SYI$_FREE_GBLPAGES 4367
#define SYI$_CONTIG_GBLPAGES 4368
#define SYI$_FREE_GBLSECTS 4369
#define SYI$_EXPECTED_VOTES 4370
#define SYI$_PU_OPTIONS 4371
#define SYI$_WPTTE_SIZE 4372
#define SYI$_WPRE_SIZE 4373
#define SYI$_SMP_SANITY_CNT 4374
#define SYI$_SMP_TICK_CNT 4375
#define SYI$_QBUS_MULT_INTR 4376
#define SYI$_SYSTEM_RIGHTS 4377
#define SYI$_SMP_SPINWAIT 4378
#define SYI$_SMP_LNGSPINWAIT 4379
#define SYI$_TIME_CONTROL 4380
#define SYI$_AVAILCPU_CNT 4381
#define SYI$_ACTIVECPU_CNT 4382
#define SYI$_MSCP_LOAD 4386
#define SYI$_MSCP_SERVE_ALL 4387
#define SYI$_POOLCHECK 4388
#define SYI$_TAPE_MVTIMEOUT 4389
#define SYI$_PSEUDOLOA 4390
#define SYI$_MINCLASSPRI 4391
#define SYI$_MAXCLASSPRI 4392
#define SYI$_MINPRPRI 4393
#define SYI$_AUTOCONFIG_ALGO 4394
#define SYI$_ERRORLOGBUFFERS 4395
#define SYI$_JOBCTLD 4396
#define SYI$_WINDOW_SYSTEM 4397
#define SYI$_MSCP_BUFFER 4398
#define SYI$_MSCP_CREDITS 4399
#define SYI$_BREAKPOINTS 4400
#define SYI$_CLOCK_INTERVAL 4401
#define SYI$_DUMPSTYLE 4402
#define SYI$_NISCS_PORT_SERV 4403
#define SYI$_RSRVPAGCNT 4404
#define SYI$_VECTOR_PROC 4405
#define SYI$_VECTOR_MARGIN 4406
#define SYI$_AFFINITY_SKIP 4407
#define SYI$_AFFINITY_TIME 4408
#define SYI$_VECTOR_EMULATOR 4409
#define SYI$_VP_MASK 4410
#define SYI$_VP_NUMBER 4411
#define SYI$_USED_GBLPAGCNT 4412
#define SYI$_USED_GBLPAGMAX 4413
#define SYI$_USED_GBLSECTCNT 4414
#define SYI$_USED_GBLSECTMAX 4415
#define SYI$_ERLBUFFERPAGES 4416
#define SYI$_TAPE_ALLOCLASS 4417
#define SYI$_PFRATH_SYS 4418
#define SYI$_WSINC_SYS 4419
#define SYI$_WSDEC_SYS 4420
#define SYI$_AWSMIN_SYS 4421
#define SYI$_AWSTIME_SYS 4422
#define SYI$_BOOT_STYLE 4423
#define SYI$_FT_FLAGS 4424
#define SYI$_SHADOWING 4425
#define SYI$_SHADOW_SYS_DISK 4426
#define SYI$_SHADOW_SYS_UNIT 4427
#define SYI$_SHADOW_MAX_COPY 4428
#define SYI$_TIMVCFAIL 4429
#define SYI$_PRIORITY_OFFSET 4431
#define SYI$_VCC_FLAGS 4432
#define SYI$_VCC_MAXSIZE 4437
#define SYI$_MMG_CTLFLAGS 4441
#define SYI$_NISCS_MAX_PKTSZ 4443
#define SYI$_NISCS_LAN_OVRHD 4444
#define SYI$_DECNET_VERSION 4445
#define SYI$_TMSCP_LOAD 4446
#define SYI$_LGI_CALLOUTS 4447
#define SYI$_NET_CALLOUTS 4448
#define SYI$_IEEE_ADDRESS 4449
#define SYI$_IEEE_ADDRESSH 4450
#define SYI$_SHADOW_MBR_TMO 4451
#define SYI$_PAGE_SIZE 4452
#define SYI$_ARCH_TYPE 4453
#define SYI$_ARCH_NAME 4454
#define SYI$_CRD_CONTROL 4455
#define SYI$_SECURITY_POLICY 4456
#define SYI$_DNVOSI1 4457
#define SYI$_MEMSIZE 4459
#define SYI$_KSTACKPAGES 4460
#define SYI$_PHYSICAL_MEMORY 4461
#define SYI$_XQP_ALLOC_BLKS 4462
#define SYI$_ZERO_LIST_HI 4463
#define SYI$_CPUTYPE 4464
#define SYI$_SYSTYPE 4465
#define SYI$_ITB_ENTRIES 4466
#define SYI$_GH_RSRVPGCNT 4467
#define SYI$_DEF_PRIO_MIN 4468
#define SYI$_DEF_PRIO_MAX 4469
#define SYI$_PSXFIFO_PRIO_MIN 4470
#define SYI$_PSXFIFO_PRIO_MAX 4471
#define SYI$_PSXRR_PRIO_MIN 4472
#define SYI$_PSXRR_PRIO_MAX 4473
#define SYI$_XQPCTLD1 4474
#define SYI$_XQPCTL2 4475
#define SYI$_CPUCONF 4477
#define SYI$_DECNET_FULLNAME 4478
#define SYI$_XQPCTLD3 4479
#define SYI$_XQPCTL4 4480
#define SYI$_XQPCTLD5 4481
#define SYI$_XQPCTL6 4482
#define SYI$_XQPCTLD7 4483
#define SYI$_XQPCTL8 4484
#define SYI$_DBGTK_SCRATCH 4485
#define SYI$_PALCODE_VERSION 4486
#define SYI$_CONSOLE_VERSION 4487
#define SYI$_GH_EXEC_CODE 4488
#define SYI$_GH_EXEC_DATA 4489
#define SYI$_GH_RES_CODE 4490
#define SYI$_GH_RES_DATA 4491
#define SYI$_IMGREG_PAGES 4492
#define SYI$_SHADOW_SYS_TMO 4493
#define SYI$_SHADOW_SYS_WAIT 4494
#define SYI$_SHADOW_REMOVE_1 4495
#define SYI$_SHADOW_REMOVE_2 4496
#define SYI$_SYSTEM_CHECK 4497
#define SYI$_PFN_COLOR_COUNT 4498
#define SYI$_REAL_CPUTYPE 4499
#define SYI$_SCSICLUSTER_P1 4500
#define SYI$_SCSICLUSTER_P2 4501
#define SYI$_SCSICLUSTER_P3 4502
#define SYI$_SCSICLUSTER_P4 4503
#define SYI$_FILE_CACHE 4504
#define SYI$_TMSCP_SERVE_ALL 4505
#define SYI$_DR_UNIT_BASE 4506
#define SYI$_MC_SERVICES_P0 4507
#define SYI$_MC_SERVICES_P1 4508
#define SYI$_MC_SERVICES_P2 4509
#define SYI$_MC_SERVICES_P3 4510
#define SYI$_MC_SERVICES_P4 4511
#define SYI$_MC_SERVICES_P5 4512
#define SYI$_MC_SERVICES_P6 4513
#define SYI$_MC_SERVICES_P7 4514
#define SYI$_MC_SERVICES_P8 4515
#define SYI$_MC_SERVICES_P9 4516
#define SYI$_S2_SIZE 4517
#define SYI$_PROCESS_SPACE_LIMIT 4518
#define SYI$_PT_BASE 4519
#define SYI$_SHARED_VA_PTES 4520
#define SYI$_MULTITHREAD 4521
#define SYI$_CWCREPRC_ENABLE 4522
#define SYI$_MAXBOBMEM 4523
#define SYI$_FAST_PATH 4524
#define SYI$_IO_PREFER_CPUS 4525
#define SYI$_ACTIVE_CPU_MASK 4526
#define SYI$_AVAIL_CPU_MASK 4527
#define SYI$_PRIMARY_CPUID 4528
#define SYI$_MAX_CPUS 4529
#define SYI$_CPUCAP_MASK 4530
#define SYI$_FILE_CACHE_MIN 4531
#define SYI$_FILE_CACHE_MAX 4532
#define SYI$_F64CTL1 4533
#define SYI$_F64CTL2 4534
#define SYI$_F64CTLD3 4535
#define SYI$_F64CTLD4 4536
#define SYI$_DISABLE_UPCALLS 4537
#define SYI$_DEVICE_NAMING 4538
#define SYI$_AVAIL_PAGES 4539
#define SYI$_PROC_SLOTS 4540
#define SYI$_BAL_SLOTS 4541
#define SYI$_NPAGED_POOL 4542
#define SYI$_PAGED_POOL 4543
#define SYI$_MAIN_MEMORY 4544
#define SYI$_ARB_SUPPORT 4545
#define SYI$_MAX_PFN 4546
#define SYI$_PFN_MEMORY_MAP 4547
#define SYI$_PMD_COUNT 4548
#define SYI$_MSCP_CMD_TMO 4549
#define SYI$_LAN_FLAGS 4550
#define SYI$_RMS_DFLRL 4551
#define SYI$_RMS_HEURISTIC 4552
#define SYI$_NPAG_INTERVAL 4553
#define SYI$_NPAG_GENTLE 4554
#define SYI$_NPAG_AGGRESSIVE 4555
#define SYI$_NPAG_BAP_MIN 4556
#define SYI$_NPAG_BAP_MAX 4557
#define SYI$_NPAG_BAP_MAX_PA 4558
#define SYI$_NPAG_RING_SIZE 4559
#define SYI$_CLUSTER_CREDITS 4560
#define SYI$_PTES_PER_PAGE 4561
#define SYI$_TEMPERATURE_VECTOR 4562
#define SYI$_POWER_VECTOR 4563
#define SYI$_FAN_VECTOR 4564
#define SYI$_THERMAL_VECTOR 4565
#define SYI$_MAXBOBS0S1 4566
#define SYI$_MAXBOBS2 4567
#define SYI$_VCC_MAX_CACHE 4568
#define SYI$_VCC_MAX_IO_SIZE 4569
#define SYI$_VCC_MAX_LOCKS 4570
#define SYI$_VCC_READAHEAD 4571
#define SYI$_VCC_WRITEBEHIND 4572
#define SYI$_VCC_WRITE_DELAY 4573
#define SYI$_SD_ALLOCLASS 4574
#define SYI$_GALAXY 4575
#define SYI$_NPAG_BAP_MIN_PA 4576
#define SYI$_BAP_MIN_REQ_SZ 4577
#define SYI$_BAP_MAX_REQ_SZ 4578
#define SYI$_BAP_MIN_PA_REG 4579
#define SYI$_BAP_MAX_PA_REG 4580
#define SYI$_GALAXY_ID 4581
#define SYI$_RMS_VCC_DFW 4582
#define SYI$_MPDEV_ENABLE_O 4583
#define SYI$_MPDEV_REMOTE_O 4584
#define SYI$_RMSD1 4585
#define SYI$_GALAXY_MEMBER 4586
#define SYI$_GALAXY_PLATFORM 4587
#define SYI$_PARTITION_ID 4588
#define SYI$_COMMUNITY_ID 4589
#define SYI$_GLX_INST_TMO 4590
#define SYI$_SMCI_FLAGS 4591
#define SYI$_SMCI_PORTS 4592
#define SYI$_SERVED_IO 4593
#define SYI$_GLX_SW_VERSION 4594
#define SYI$_GLX_MAX_MEMBERS 4595
#define SYI$_GLX_INCARNATION 4596
#define SYI$_GLX_FORMATION 4597
#define SYI$_GLX_TERMINATION 4598
#define SYI$_GLX_MBR_NAME 4599
#define SYI$_GLX_MBR_MEMBER 4600
#define SYI$_GLX_MBR_INCARNATION 4601
#define SYI$_GLX_MBR_JOINED 4602
#define SYI$_MPDEV_LCRETRIES 4603
#define SYI$_MPDEV_D1 4604
#define SYI$_CLUSTER_NTIME 4605
#define SYI$_CLUSTER_NTIME_REF 4606
#define SYI$_MPDEV_POLLER_O 4607
#define SYI$_CPU_FAILOVER 4608
#define SYI$_POTENTIAL_CPU_MASK 4609
#define SYI$_POTENTIALCPU_CNT 4610
#define SYI$_CPU_AUTOSTART 4611
#define SYI$_FAST_PATH_PORTS 4614
#define SYI$_GLX_SHM_REG 4615
#define SYI$_RAD_SUPPORT 4616
#define SYI$_NPAGECALC 4617
#define SYI$_WBM_MSG_INT 4618
#define SYI$_WBM_MSG_UPPER 4619
#define SYI$_WBM_MSG_LOWER 4620
#define SYI$_HP_ACTIVE_CPU_CNT 4621
#define SYI$_HP_ACTIVE_SP_CNT 4622
#define SYI$_HP_CONFIG_SP_CNT 4623
#define SYI$_HP_CONFIG_SBB_CNT 4624
#define SYI$_SHADOW_MAX_UNIT 4625
#define SYI$_WBM_OPCOM_LVL 4626
#define SYI$_AUTO_DLIGHT_SAV 4627
#define SYI$_RAD_MAX_RADS 4628
#define SYI$_RAD_CPUS 4629
#define SYI$_RAD_MEMSIZE 4630
#define SYI$_RAD_SHMEMSIZE 4631
#define SYI$_GALAXY_SHMEMSIZE 4632
#define SYI$_NPAGERAD 4633
#define SYI$_SERIAL_NUMBER 4634
#define SYI$_LASTEXE 4636
#define SYI$_CPU 8192
#define SYI$_BUGREBOOT 8193
#define SYI$_CRDENABLE 8194
#define SYI$_DUMPBUG 8195
#define SYI$_BUGCHECKFATAL 8196
#define SYI$_ACP_MULTIPLE 8197
#define SYI$_NOAUTOCONFIG 8198
#define SYI$_NOCLOCK 8199
#define SYI$_NOCLUSTER 8200
#define SYI$_POOLPAGING 8201
#define SYI$_SBIERRENABLE 8202
#define SYI$_SETTIME 8203
#define SYI$_ACP_SHARE 8204
#define SYI$_SYSPAGING 8205
#define SYI$_UAFALTERNATE 8206
#define SYI$_WRITABLESYS 8207
#define SYI$_RESALLOC 8208
#define SYI$_SSINHIBIT 8209
#define SYI$_CONCEAL_DEVICES 8210
#define SYI$_SAVEDUMP 8211
#define SYI$_MOUNTMSG 8212
#define SYI$_DISMOUMSG 8213
#define SYI$_LOADERAPT 8214
#define SYI$_LOADCHKPRT 8215
#define SYI$_XCPU 8216
#define SYI$_CJFLOAD 8217
#define SYI$_CJFSYSRUJ 8218
#define SYI$_NODE_AREA 8219
#define SYI$_NODE_NUMBER 8220
#define SYI$_CLASS_PROT 8221
#define SYI$_CHARACTER_EMULATED 8222
#define SYI$_DECIMAL_EMULATED 8223
#define SYI$_D_FLOAT_EMULATED 8224
#define SYI$_F_FLOAT_EMULATED 8225
#define SYI$_G_FLOAT_EMULATED 8226
#define SYI$_H_FLOAT_EMULATED 8227
#define SYI$_LOADMTACCESS 8228
#define SYI$_ACP_XQP_RES 8229
#define SYI$_WRITESYSPARAMS 8230
#define SYI$_LGI_BRK_TERM 8231
#define SYI$_LGI_BRK_DISUSER 8232
#define SYI$_ACP_REBLDSYSD 8233
#define SYI$_WS_OPA0 8234
#define SYI$_NOPGFLSWP 8235
#define SYI$_LOAD_SYS_IMAGES 8237
#define SYI$_NISCS_CONV_BOOT 8238
#define SYI$_NISCS_LOAD_PEA0 8239
#define SYI$_SA_APP 8240
#define SYI$_LOAD_PWD_POLICY 8241
#define SYI$_FT_ACTIVE 8242
#define SYI$_WLKSYSDSK 8244
#define SYI$_DBGTK_LOADED 8245
#define SYI$_DAY_OVERRIDE 8246
#define SYI$_DAY_SECONDARY 8247
#define SYI$_CWLOGICALS 8248
#define SYI$_POWEROFF 8249
#define SYI$_MPDEV_ENABLE 8250
#define SYI$_MPDEV_REMOTE 8251
#define SYI$_MPDEV_POLLER 8252
#define SYI$_LCKMGR_MODE 8253
#define SYI$_LCKMGR_RSVD 8254
#define SYI$_LCKMGR_CPUID 8255
#define SYI$_LASTFLD 8256

#define SYI$C_SFWTYPE 1
#define SYI$C_HDWTYPE 2
#define SYI$C_LISTEND 0
#define SYI$_OLDVERSION 256
#define SYI$_LASTSFW 257

#define SYI$_OLDCPU 512
#define SYI$_OLDSID 513
#define SYI$_LASTHDW 514
#define SYI$K_ENV_VECTOR_LENGTH 16
#define SYI$K_ENV_STATUS_FAILED 0
#define SYI$K_ENV_STATUS_OK 1
#define SYI$K_ENV_STATUS_NOT_PRESENT 255
#define SYI$K_ENV_STATUS_UNKNOWN 254

#endif

