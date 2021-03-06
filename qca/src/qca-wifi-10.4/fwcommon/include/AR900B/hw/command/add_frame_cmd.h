// Copyright (c) 2013 Qualcomm Atheros, Inc.  All rights reserved.
// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _ADD_FRAME_CMD_H_
#define _ADD_FRAME_CMD_H_
#if !defined(__ASSEMBLER__)
#endif

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	cmd_id[3:0], reserved_0a[7:4], sw_cmd_ref[15:8], qid[29:16], reserved_0b[31:30]
//	1	first_mpdu[0], last_mpdu[1], first_msdu[2], reserved_1z[3], raw_mpdu[4], reserved_1b[5], prev_msdu_pad_size[7:6], mpdu_hdr_length[12:8], reserved_1a[13], rate_offset[15:14], l4_chksum_en[16], l3_chksum_en[17], encap_type[19:18], wds[20], use_ad_b[21], toggle_eosp[22], toggle_power_mgmt[23], toggle_more_data[24], strip_vlan[25], replace_qos_ctl[26], replace_ht_vht_ctl[27], raw_update_seqnum[28], raw_update_iv[29], raw_update_retry[30], spare_sw_msdu_param[31]
//	2	msdu_length[13:0], reserved_2[15:14], msdu_index[31:16]
//	3	remaining_lifetime[15:0], trigger_scheduler_ring_id[19:16], trigger_all[20], reserved_3[31:21]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_ADD_FRAME_CMD 4

struct add_frame_cmd {
    volatile uint32_t cmd_id                          :  4, //[3:0]
                      reserved_0a                     :  4, //[7:4]
                      sw_cmd_ref                      :  8, //[15:8]
                      qid                             : 14, //[29:16]
                      reserved_0b                     :  2; //[31:30]
    volatile uint32_t first_mpdu                      :  1, //[0]
                      last_mpdu                       :  1, //[1]
                      first_msdu                      :  1, //[2]
                      reserved_1z                     :  1, //[3]
                      raw_mpdu                        :  1, //[4]
                      reserved_1b                     :  1, //[5]
                      prev_msdu_pad_size              :  2, //[7:6]
                      mpdu_hdr_length                 :  5, //[12:8]
                      reserved_1a                     :  1, //[13]
                      rate_offset                     :  2, //[15:14]
                      l4_chksum_en                    :  1, //[16]
                      l3_chksum_en                    :  1, //[17]
                      encap_type                      :  2, //[19:18]
                      wds                             :  1, //[20]
                      use_ad_b                        :  1, //[21]
                      toggle_eosp                     :  1, //[22]
                      toggle_power_mgmt               :  1, //[23]
                      toggle_more_data                :  1, //[24]
                      strip_vlan                      :  1, //[25]
                      replace_qos_ctl                 :  1, //[26]
                      replace_ht_vht_ctl              :  1, //[27]
                      raw_update_seqnum               :  1, //[28]
                      raw_update_iv                   :  1, //[29]
                      raw_update_retry                :  1, //[30]
                      spare_sw_msdu_param             :  1; //[31]
    volatile uint32_t msdu_length                     : 14, //[13:0]
                      reserved_2                      :  2, //[15:14]
                      msdu_index                      : 16; //[31:16]
    volatile uint32_t remaining_lifetime              : 16, //[15:0]
                      trigger_scheduler_ring_id       :  4, //[19:16]
                      trigger_all                     :  1, //[20]
                      reserved_3                      : 11; //[31:21]
};

/*

cmd_id
			
			Command ID:
			
			Set to 0x0 (which indicates Add  frame cmd) <legal 0>

reserved_0a
			
			FW will set to 0, MAC will ignore.  <legal 0>

sw_cmd_ref
			
			SW command reference. A field only used by SW and
			ignored by QM. This field can aid SW to map this command to
			its originator and is used for tracking/debugging purposes. 
			<legal all>

qid
			
			Queue ID:  The Index of the MPDU transmit queue to which
			this MSDU frame is pushed. <legal all>

reserved_0b
			
			FW will set to 0, MAC will ignore.  <legal 0>

first_mpdu
			
			1: this MPDU is only allowed to be transmitted as the
			first MPDU in a PPDU.  It shall not be aggregated with other
			MPDUs towards the head of the queue.
			
			0: there in no restriction on how this MPDU is
			aggregated with other MPDUs towards the head of the queue.
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor. <legal all>

last_mpdu
			
			1:  this frame is only allowed to be transmitted as the
			last MPDU in a PPDU.  It shall not be aggregated with other
			MPDUs towards the tail of the queue.
			
			0: This frame does not need to be the last one in a
			A-MPDU
			
			Note: When both First_MPDU and Last_MPDU are set, this
			MPDU will be transmitted in its own in a PPDU.
			
			Note: When header types (like WDS => 4 address format),
			changes from one frame to an other, SW shall use the
			First_MPDU and Last_MPDU cmd bits to ensure that these
			frames do not get lumped together within the same PPDU.
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor.  <legal all>

first_msdu
			
			0: This MSDU is allowed to be connected to previously
			pushed MSDUs.
			
			1: This MSDU is NOT allowed to be connected to
			previously pushed MSDUs. This MSDU shall be the first one in
			a new MPDU.
			
			Note: SW will set this bit to ensure that HW will not
			create an MPDU with too many MSDUs in it. This way it can
			control the MSDU density within an MPDU.
			
			There is no Last_MSDU bit, as this is not needed. If SW
			wants to ensure that no other  following MSDU will be
			agregated with this MSDU, the next MSDU push cmd to this
			queue will have the First_MSDU bit set.
			
			Example of when First_MSDU should be set: MPDU header
			length changes (3 address - 4 address), MPDU is getting too
			long, MPDU has too many short MSDUs and can cause DMA
			underrun issues, etc
			
			<legal 0>

reserved_1z
			
			
			
			<legal 0>

raw_mpdu
			
			0: Attached frame is an MSDU
			
			1: Attached frame is a RAW MPDU. It is not allowed to be
			aggregated with any other MSDU into an MPDU.
			
			<legal all>

reserved_1b
			
			0

prev_msdu_pad_size
			
			Previous MSDU pad size: In case the queue manager can
			aggregate this MSDU frame with the previous MSDU frame
			pushed into this queue, this field will indicate the amount
			of byte padding needed for the previously pushed MSDU frame
			to get its length up to a multiple of 4 bytes. For details
			see the next subchapter: MPDU length calculations.  
			
			<legal all>

mpdu_hdr_length
			
			MPDU header length: This field is used by the queue
			manager to calculate the value in the MPDU_length field in
			the MPDU_link descriptor. The value indicates number of
			bytes.
			
			This length includes all encryption related header
			lengths additions (like IV field, etc), address fields (3 or
			4 type format, etc.
			
			For details see the next subchapter: MPDU length
			calculations.  <legal 24, 26, 28, 30>

reserved_1a
			
			FW will set to 0, MAC will ignore.  <legal 0>

rate_offset
			
			The Rate Offset influences the final transmit rate
			selected for this frame.
			
			<enum 0 Max_column_A>  Maximum transmit rate comes from
			column A
			
			<enum 1 Max_column_B> Maximum transmit rate comes from
			column B
			
			<enum 2 Max_column_C> Maximum transmit rate comes from
			column C
			
			<enum 3 Max_column_D> Maximum transmit rate comes from
			column D
			
			Details of Rate_offset handling are described in chapter
			REF _Ref329693574 \w \h 10.1 
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor. <legal all>

l4_chksum_en
			
			The bit is part of the sw_msdu_param.
			
			
			
			If set the TCP/UDP checksum will be updated by HW.??
			Used by the OLE during encapsulation.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

l3_chksum_en
			
			The bit is part of the sw_msdu_param.
			
			
			
			If set the IP checksum will be updated by HW.?? Used by
			the OLE during encapsulation.??
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

encap_type
			
			The bit is part of the sw_msdu_param.
			
			
			
			Indicates the encapsulation that HW will perform:
			
			0: RAW: no encapsulation
			
			1: Native WiFi
			
			2: Ethernet 2 (DIX)
			
			3: 802.3 (uses SNAP/LLC)
			
			Used by the OLE during encapsulation.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

wds
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			If set the current packet is 4-address frame.?? Required
			because an aggregate can include some frames with 3 address
			format and other frames with 4 address format.?? 
			
			Used by the OLE during encapsulation.?? 
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

use_ad_b
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Normally in AP mode the DA address is used as the RA.??
			This is normally fine but the use_ad_b bit should be set
			when DA is a multicast/broadcast address but we want to send
			this packet using the destination STA address which will be
			held in the mac_addr_b field of the peer descriptor.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

toggle_eosp
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the EOSP bit in the QoS control field of the
			tx_ppdu_start descriptor.?? Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

toggle_power_mgmt
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the power management bit in the frame control
			field of the tx_ppdu_start descriptor.?? Used by the OLE
			during encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

toggle_more_data
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the A-MSDU bit in the QoS control field of the
			tx_ppdu_start descriptor.?? Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>

strip_vlan
			
			Strip the VLAN during encapsulation.?? Used by the OLE.
			
			<legal all>

replace_qos_ctl
			
			If set the OLE will insert/replace the QoS control field
			in the MPDU.
			
			<legal all>

replace_ht_vht_ctl
			
			If set the OLE will insert/replace the HT/VHT control
			field in the MPDU.
			
			<legal all>

raw_update_seqnum
			
			If set the tx_ppdu_start seqnum mechanism is used to
			update the sequence number if the MPDU is in RAW format.??
			If clear, the sequence number in the MPDU is unchanged if
			the MPDU is in RAW format.
			
			<legal all>

raw_update_iv
			
			If set the tx_ppdu_start IV mechanism is used to update
			the IV if the MPDU is in RAW format.?? If clear, the IV in
			the MPDU is unchanged if the MPDU is in RAW format.
			
			<legal all>

raw_update_retry
			
			If set the tx_ppdu_retry?? mechanism is used to update
			the retry bit?? if ??the MPDU is in RAW format.?? If clear,
			the retry bit ??in the MPDU is unchanged if the MPDU is in
			RAW format.
			
			<legal all>

spare_sw_msdu_param
			
			These bits are part of the sw_msdu_param.
			
			
			
			They are the remaining SW MSDU parameters and are not
			evaluated by HW.
			
			
			<legal all>

msdu_length
			
			This field is used by the queue manager to calculate the
			value in the MPDU_length field in the MPDU_link descriptor.
			The value indicates number of bytes.
			
			Note: in case the frame in an MSDU, the length should be
			smaller then approx. 1.5 K bytes (12 bits). In case of a raw
			frame, the length can be up to approx 11K bytes (14 bits). 
			
			For details see the next subchapter: MPDU length
			calculations.  
			
			 <legal 14-2500>

reserved_2
			
			FW will set to 0, MAC will ignore.  <legal 0>

msdu_index
			
			Index of the MSDU link extension data descriptor
			
			Indirect reference to the memory location where the MSDU
			link descriptor can be found, as well as the MSDU link
			extension descriptor.  <legal all>

remaining_lifetime
			
			The remaining lifetime.
			
			The units of this value is programmed in a global
			register in the common register block.
			
			The value is the remaining lifetime for this frame.  A
			value of 0 indicates that there is no lifetime limit.
			
			If the frame is the first one in an MPDU, the HW will
			translate this into an absolute time value, which is stored
			in the MPDU link extension descriptor. In case of NO
			lifetime limit, the HW will also store value 0x0.
			
			If the frame is NOT the first one in an MPDU, the HW
			will take over this value  and assign it as the remaining
			lifetime for this MPDU.
			
			It is up to SW to make sure it does not group frames in
			MSDUs that have very different lifetime values. <legal all>

trigger_scheduler_ring_id
			
			The ID of the scheduler ring that, when operating in
			continuous mode, will be triggered if this frame changes the
			state of the queue from empty to not empty. The value in
			this field is passed on in the  QUEUE_NOT_EMPTY TLV to the
			scheduler  <legal all>

trigger_all
			
			When set, all scheduler queues need to be triggered, and
			should be activated if stalled. The value in this field is
			passed on in the  QUEUE_NOT_EMPTY TLV to the scheduler.
			<legal all>

reserved_3
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/


/* Description		ADD_FRAME_CMD_0_CMD_ID
			
			Command ID:
			
			Set to 0x0 (which indicates Add  frame cmd) <legal 0>
*/
#define ADD_FRAME_CMD_0_CMD_ID_OFFSET                                0x00000000
#define ADD_FRAME_CMD_0_CMD_ID_LSB                                   0
#define ADD_FRAME_CMD_0_CMD_ID_MASK                                  0x0000000f

/* Description		ADD_FRAME_CMD_0_RESERVED_0A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define ADD_FRAME_CMD_0_RESERVED_0A_OFFSET                           0x00000000
#define ADD_FRAME_CMD_0_RESERVED_0A_LSB                              4
#define ADD_FRAME_CMD_0_RESERVED_0A_MASK                             0x000000f0

/* Description		ADD_FRAME_CMD_0_SW_CMD_REF
			
			SW command reference. A field only used by SW and
			ignored by QM. This field can aid SW to map this command to
			its originator and is used for tracking/debugging purposes. 
			<legal all>
*/
#define ADD_FRAME_CMD_0_SW_CMD_REF_OFFSET                            0x00000000
#define ADD_FRAME_CMD_0_SW_CMD_REF_LSB                               8
#define ADD_FRAME_CMD_0_SW_CMD_REF_MASK                              0x0000ff00

/* Description		ADD_FRAME_CMD_0_QID
			
			Queue ID:  The Index of the MPDU transmit queue to which
			this MSDU frame is pushed. <legal all>
*/
#define ADD_FRAME_CMD_0_QID_OFFSET                                   0x00000000
#define ADD_FRAME_CMD_0_QID_LSB                                      16
#define ADD_FRAME_CMD_0_QID_MASK                                     0x3fff0000

/* Description		ADD_FRAME_CMD_0_RESERVED_0B
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define ADD_FRAME_CMD_0_RESERVED_0B_OFFSET                           0x00000000
#define ADD_FRAME_CMD_0_RESERVED_0B_LSB                              30
#define ADD_FRAME_CMD_0_RESERVED_0B_MASK                             0xc0000000

/* Description		ADD_FRAME_CMD_1_FIRST_MPDU
			
			1: this MPDU is only allowed to be transmitted as the
			first MPDU in a PPDU.  It shall not be aggregated with other
			MPDUs towards the head of the queue.
			
			0: there in no restriction on how this MPDU is
			aggregated with other MPDUs towards the head of the queue.
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor. <legal all>
*/
#define ADD_FRAME_CMD_1_FIRST_MPDU_OFFSET                            0x00000004
#define ADD_FRAME_CMD_1_FIRST_MPDU_LSB                               0
#define ADD_FRAME_CMD_1_FIRST_MPDU_MASK                              0x00000001

/* Description		ADD_FRAME_CMD_1_LAST_MPDU
			
			1:  this frame is only allowed to be transmitted as the
			last MPDU in a PPDU.  It shall not be aggregated with other
			MPDUs towards the tail of the queue.
			
			0: This frame does not need to be the last one in a
			A-MPDU
			
			Note: When both First_MPDU and Last_MPDU are set, this
			MPDU will be transmitted in its own in a PPDU.
			
			Note: When header types (like WDS => 4 address format),
			changes from one frame to an other, SW shall use the
			First_MPDU and Last_MPDU cmd bits to ensure that these
			frames do not get lumped together within the same PPDU.
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor.  <legal all>
*/
#define ADD_FRAME_CMD_1_LAST_MPDU_OFFSET                             0x00000004
#define ADD_FRAME_CMD_1_LAST_MPDU_LSB                                1
#define ADD_FRAME_CMD_1_LAST_MPDU_MASK                               0x00000002

/* Description		ADD_FRAME_CMD_1_FIRST_MSDU
			
			0: This MSDU is allowed to be connected to previously
			pushed MSDUs.
			
			1: This MSDU is NOT allowed to be connected to
			previously pushed MSDUs. This MSDU shall be the first one in
			a new MPDU.
			
			Note: SW will set this bit to ensure that HW will not
			create an MPDU with too many MSDUs in it. This way it can
			control the MSDU density within an MPDU.
			
			There is no Last_MSDU bit, as this is not needed. If SW
			wants to ensure that no other  following MSDU will be
			agregated with this MSDU, the next MSDU push cmd to this
			queue will have the First_MSDU bit set.
			
			Example of when First_MSDU should be set: MPDU header
			length changes (3 address - 4 address), MPDU is getting too
			long, MPDU has too many short MSDUs and can cause DMA
			underrun issues, etc
			
			<legal 0>
*/
#define ADD_FRAME_CMD_1_FIRST_MSDU_OFFSET                            0x00000004
#define ADD_FRAME_CMD_1_FIRST_MSDU_LSB                               2
#define ADD_FRAME_CMD_1_FIRST_MSDU_MASK                              0x00000004

/* Description		ADD_FRAME_CMD_1_RESERVED_1Z
			
			
			
			<legal 0>
*/
#define ADD_FRAME_CMD_1_RESERVED_1Z_OFFSET                           0x00000004
#define ADD_FRAME_CMD_1_RESERVED_1Z_LSB                              3
#define ADD_FRAME_CMD_1_RESERVED_1Z_MASK                             0x00000008

/* Description		ADD_FRAME_CMD_1_RAW_MPDU
			
			0: Attached frame is an MSDU
			
			1: Attached frame is a RAW MPDU. It is not allowed to be
			aggregated with any other MSDU into an MPDU.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_RAW_MPDU_OFFSET                              0x00000004
#define ADD_FRAME_CMD_1_RAW_MPDU_LSB                                 4
#define ADD_FRAME_CMD_1_RAW_MPDU_MASK                                0x00000010

/* Description		ADD_FRAME_CMD_1_RESERVED_1B
			
			0
*/
#define ADD_FRAME_CMD_1_RESERVED_1B_OFFSET                           0x00000004
#define ADD_FRAME_CMD_1_RESERVED_1B_LSB                              5
#define ADD_FRAME_CMD_1_RESERVED_1B_MASK                             0x00000020

/* Description		ADD_FRAME_CMD_1_PREV_MSDU_PAD_SIZE
			
			Previous MSDU pad size: In case the queue manager can
			aggregate this MSDU frame with the previous MSDU frame
			pushed into this queue, this field will indicate the amount
			of byte padding needed for the previously pushed MSDU frame
			to get its length up to a multiple of 4 bytes. For details
			see the next subchapter: MPDU length calculations.  
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_PREV_MSDU_PAD_SIZE_OFFSET                    0x00000004
#define ADD_FRAME_CMD_1_PREV_MSDU_PAD_SIZE_LSB                       6
#define ADD_FRAME_CMD_1_PREV_MSDU_PAD_SIZE_MASK                      0x000000c0

/* Description		ADD_FRAME_CMD_1_MPDU_HDR_LENGTH
			
			MPDU header length: This field is used by the queue
			manager to calculate the value in the MPDU_length field in
			the MPDU_link descriptor. The value indicates number of
			bytes.
			
			This length includes all encryption related header
			lengths additions (like IV field, etc), address fields (3 or
			4 type format, etc.
			
			For details see the next subchapter: MPDU length
			calculations.  <legal 24, 26, 28, 30>
*/
#define ADD_FRAME_CMD_1_MPDU_HDR_LENGTH_OFFSET                       0x00000004
#define ADD_FRAME_CMD_1_MPDU_HDR_LENGTH_LSB                          8
#define ADD_FRAME_CMD_1_MPDU_HDR_LENGTH_MASK                         0x00001f00

/* Description		ADD_FRAME_CMD_1_RESERVED_1A
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define ADD_FRAME_CMD_1_RESERVED_1A_OFFSET                           0x00000004
#define ADD_FRAME_CMD_1_RESERVED_1A_LSB                              13
#define ADD_FRAME_CMD_1_RESERVED_1A_MASK                             0x00002000

/* Description		ADD_FRAME_CMD_1_RATE_OFFSET
			
			The Rate Offset influences the final transmit rate
			selected for this frame.
			
			<enum 0 Max_column_A>  Maximum transmit rate comes from
			column A
			
			<enum 1 Max_column_B> Maximum transmit rate comes from
			column B
			
			<enum 2 Max_column_C> Maximum transmit rate comes from
			column C
			
			<enum 3 Max_column_D> Maximum transmit rate comes from
			column D
			
			Details of Rate_offset handling are described in chapter
			REF _Ref329693574 \w \h 10.1 
			
			Info in this field is passed on by the Queue manager
			into the MPDU_link descriptor. <legal all>
*/
#define ADD_FRAME_CMD_1_RATE_OFFSET_OFFSET                           0x00000004
#define ADD_FRAME_CMD_1_RATE_OFFSET_LSB                              14
#define ADD_FRAME_CMD_1_RATE_OFFSET_MASK                             0x0000c000

/* Description		ADD_FRAME_CMD_1_L4_CHKSUM_EN
			
			The bit is part of the sw_msdu_param.
			
			
			
			If set the TCP/UDP checksum will be updated by HW.??
			Used by the OLE during encapsulation.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_L4_CHKSUM_EN_OFFSET                          0x00000004
#define ADD_FRAME_CMD_1_L4_CHKSUM_EN_LSB                             16
#define ADD_FRAME_CMD_1_L4_CHKSUM_EN_MASK                            0x00010000

/* Description		ADD_FRAME_CMD_1_L3_CHKSUM_EN
			
			The bit is part of the sw_msdu_param.
			
			
			
			If set the IP checksum will be updated by HW.?? Used by
			the OLE during encapsulation.??
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_L3_CHKSUM_EN_OFFSET                          0x00000004
#define ADD_FRAME_CMD_1_L3_CHKSUM_EN_LSB                             17
#define ADD_FRAME_CMD_1_L3_CHKSUM_EN_MASK                            0x00020000

/* Description		ADD_FRAME_CMD_1_ENCAP_TYPE
			
			The bit is part of the sw_msdu_param.
			
			
			
			Indicates the encapsulation that HW will perform:
			
			0: RAW: no encapsulation
			
			1: Native WiFi
			
			2: Ethernet 2 (DIX)
			
			3: 802.3 (uses SNAP/LLC)
			
			Used by the OLE during encapsulation.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_ENCAP_TYPE_OFFSET                            0x00000004
#define ADD_FRAME_CMD_1_ENCAP_TYPE_LSB                               18
#define ADD_FRAME_CMD_1_ENCAP_TYPE_MASK                              0x000c0000

/* Description		ADD_FRAME_CMD_1_WDS
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			It is part of the sw_msdu_param coming from the QM ADD
			frame command.
			
			
			
			If set the current packet is 4-address frame.?? Required
			because an aggregate can include some frames with 3 address
			format and other frames with 4 address format.?? 
			
			Used by the OLE during encapsulation.?? 
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_WDS_OFFSET                                   0x00000004
#define ADD_FRAME_CMD_1_WDS_LSB                                      20
#define ADD_FRAME_CMD_1_WDS_MASK                                     0x00100000

/* Description		ADD_FRAME_CMD_1_USE_AD_B
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Normally in AP mode the DA address is used as the RA.??
			This is normally fine but the use_ad_b bit should be set
			when DA is a multicast/broadcast address but we want to send
			this packet using the destination STA address which will be
			held in the mac_addr_b field of the peer descriptor.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_USE_AD_B_OFFSET                              0x00000004
#define ADD_FRAME_CMD_1_USE_AD_B_LSB                                 21
#define ADD_FRAME_CMD_1_USE_AD_B_MASK                                0x00200000

/* Description		ADD_FRAME_CMD_1_TOGGLE_EOSP
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the EOSP bit in the QoS control field of the
			tx_ppdu_start descriptor.?? Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_TOGGLE_EOSP_OFFSET                           0x00000004
#define ADD_FRAME_CMD_1_TOGGLE_EOSP_LSB                              22
#define ADD_FRAME_CMD_1_TOGGLE_EOSP_MASK                             0x00400000

/* Description		ADD_FRAME_CMD_1_TOGGLE_POWER_MGMT
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the power management bit in the frame control
			field of the tx_ppdu_start descriptor.?? Used by the OLE
			during encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_TOGGLE_POWER_MGMT_OFFSET                     0x00000004
#define ADD_FRAME_CMD_1_TOGGLE_POWER_MGMT_LSB                        23
#define ADD_FRAME_CMD_1_TOGGLE_POWER_MGMT_MASK                       0x00800000

/* Description		ADD_FRAME_CMD_1_TOGGLE_MORE_DATA
			
			The bit is part of the sw_msdu_param.
			
			
			
			The bit is only evaluated when this MSDU is the first
			MSDU in an MPDU. For other MSDUs this bit setting is
			ignored.
			
			
			
			Toggle the A-MSDU bit in the QoS control field of the
			tx_ppdu_start descriptor.?? Used by the OLE during
			encapsulation.
			
			This bit is only used for backup IOT purposes when
			
			Normal eosp control is done by TX PCU, and controlled
			from configurations in the scheduler command.
			
			Field is passed on by the QM to the MSDU link
			descriptor.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_TOGGLE_MORE_DATA_OFFSET                      0x00000004
#define ADD_FRAME_CMD_1_TOGGLE_MORE_DATA_LSB                         24
#define ADD_FRAME_CMD_1_TOGGLE_MORE_DATA_MASK                        0x01000000

/* Description		ADD_FRAME_CMD_1_STRIP_VLAN
			
			Strip the VLAN during encapsulation.?? Used by the OLE.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_STRIP_VLAN_OFFSET                            0x00000004
#define ADD_FRAME_CMD_1_STRIP_VLAN_LSB                               25
#define ADD_FRAME_CMD_1_STRIP_VLAN_MASK                              0x02000000

/* Description		ADD_FRAME_CMD_1_REPLACE_QOS_CTL
			
			If set the OLE will insert/replace the QoS control field
			in the MPDU.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_REPLACE_QOS_CTL_OFFSET                       0x00000004
#define ADD_FRAME_CMD_1_REPLACE_QOS_CTL_LSB                          26
#define ADD_FRAME_CMD_1_REPLACE_QOS_CTL_MASK                         0x04000000

/* Description		ADD_FRAME_CMD_1_REPLACE_HT_VHT_CTL
			
			If set the OLE will insert/replace the HT/VHT control
			field in the MPDU.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_REPLACE_HT_VHT_CTL_OFFSET                    0x00000004
#define ADD_FRAME_CMD_1_REPLACE_HT_VHT_CTL_LSB                       27
#define ADD_FRAME_CMD_1_REPLACE_HT_VHT_CTL_MASK                      0x08000000

/* Description		ADD_FRAME_CMD_1_RAW_UPDATE_SEQNUM
			
			If set the tx_ppdu_start seqnum mechanism is used to
			update the sequence number if the MPDU is in RAW format.??
			If clear, the sequence number in the MPDU is unchanged if
			the MPDU is in RAW format.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_RAW_UPDATE_SEQNUM_OFFSET                     0x00000004
#define ADD_FRAME_CMD_1_RAW_UPDATE_SEQNUM_LSB                        28
#define ADD_FRAME_CMD_1_RAW_UPDATE_SEQNUM_MASK                       0x10000000

/* Description		ADD_FRAME_CMD_1_RAW_UPDATE_IV
			
			If set the tx_ppdu_start IV mechanism is used to update
			the IV if the MPDU is in RAW format.?? If clear, the IV in
			the MPDU is unchanged if the MPDU is in RAW format.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_RAW_UPDATE_IV_OFFSET                         0x00000004
#define ADD_FRAME_CMD_1_RAW_UPDATE_IV_LSB                            29
#define ADD_FRAME_CMD_1_RAW_UPDATE_IV_MASK                           0x20000000

/* Description		ADD_FRAME_CMD_1_RAW_UPDATE_RETRY
			
			If set the tx_ppdu_retry?? mechanism is used to update
			the retry bit?? if ??the MPDU is in RAW format.?? If clear,
			the retry bit ??in the MPDU is unchanged if the MPDU is in
			RAW format.
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_RAW_UPDATE_RETRY_OFFSET                      0x00000004
#define ADD_FRAME_CMD_1_RAW_UPDATE_RETRY_LSB                         30
#define ADD_FRAME_CMD_1_RAW_UPDATE_RETRY_MASK                        0x40000000

/* Description		ADD_FRAME_CMD_1_SPARE_SW_MSDU_PARAM
			
			These bits are part of the sw_msdu_param.
			
			
			
			They are the remaining SW MSDU parameters and are not
			evaluated by HW.
			
			
			<legal all>
*/
#define ADD_FRAME_CMD_1_SPARE_SW_MSDU_PARAM_OFFSET                   0x00000004
#define ADD_FRAME_CMD_1_SPARE_SW_MSDU_PARAM_LSB                      31
#define ADD_FRAME_CMD_1_SPARE_SW_MSDU_PARAM_MASK                     0x80000000

/* Description		ADD_FRAME_CMD_2_MSDU_LENGTH
			
			This field is used by the queue manager to calculate the
			value in the MPDU_length field in the MPDU_link descriptor.
			The value indicates number of bytes.
			
			Note: in case the frame in an MSDU, the length should be
			smaller then approx. 1.5 K bytes (12 bits). In case of a raw
			frame, the length can be up to approx 11K bytes (14 bits). 
			
			For details see the next subchapter: MPDU length
			calculations.  
			
			 <legal 14-2500>
*/
#define ADD_FRAME_CMD_2_MSDU_LENGTH_OFFSET                           0x00000008
#define ADD_FRAME_CMD_2_MSDU_LENGTH_LSB                              0
#define ADD_FRAME_CMD_2_MSDU_LENGTH_MASK                             0x00003fff

/* Description		ADD_FRAME_CMD_2_RESERVED_2
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define ADD_FRAME_CMD_2_RESERVED_2_OFFSET                            0x00000008
#define ADD_FRAME_CMD_2_RESERVED_2_LSB                               14
#define ADD_FRAME_CMD_2_RESERVED_2_MASK                              0x0000c000

/* Description		ADD_FRAME_CMD_2_MSDU_INDEX
			
			Index of the MSDU link extension data descriptor
			
			Indirect reference to the memory location where the MSDU
			link descriptor can be found, as well as the MSDU link
			extension descriptor.  <legal all>
*/
#define ADD_FRAME_CMD_2_MSDU_INDEX_OFFSET                            0x00000008
#define ADD_FRAME_CMD_2_MSDU_INDEX_LSB                               16
#define ADD_FRAME_CMD_2_MSDU_INDEX_MASK                              0xffff0000

/* Description		ADD_FRAME_CMD_3_REMAINING_LIFETIME
			
			The remaining lifetime.
			
			The units of this value is programmed in a global
			register in the common register block.
			
			The value is the remaining lifetime for this frame.  A
			value of 0 indicates that there is no lifetime limit.
			
			If the frame is the first one in an MPDU, the HW will
			translate this into an absolute time value, which is stored
			in the MPDU link extension descriptor. In case of NO
			lifetime limit, the HW will also store value 0x0.
			
			If the frame is NOT the first one in an MPDU, the HW
			will take over this value  and assign it as the remaining
			lifetime for this MPDU.
			
			It is up to SW to make sure it does not group frames in
			MSDUs that have very different lifetime values. <legal all>
*/
#define ADD_FRAME_CMD_3_REMAINING_LIFETIME_OFFSET                    0x0000000c
#define ADD_FRAME_CMD_3_REMAINING_LIFETIME_LSB                       0
#define ADD_FRAME_CMD_3_REMAINING_LIFETIME_MASK                      0x0000ffff

/* Description		ADD_FRAME_CMD_3_TRIGGER_SCHEDULER_RING_ID
			
			The ID of the scheduler ring that, when operating in
			continuous mode, will be triggered if this frame changes the
			state of the queue from empty to not empty. The value in
			this field is passed on in the  QUEUE_NOT_EMPTY TLV to the
			scheduler  <legal all>
*/
#define ADD_FRAME_CMD_3_TRIGGER_SCHEDULER_RING_ID_OFFSET             0x0000000c
#define ADD_FRAME_CMD_3_TRIGGER_SCHEDULER_RING_ID_LSB                16
#define ADD_FRAME_CMD_3_TRIGGER_SCHEDULER_RING_ID_MASK               0x000f0000

/* Description		ADD_FRAME_CMD_3_TRIGGER_ALL
			
			When set, all scheduler queues need to be triggered, and
			should be activated if stalled. The value in this field is
			passed on in the  QUEUE_NOT_EMPTY TLV to the scheduler.
			<legal all>
*/
#define ADD_FRAME_CMD_3_TRIGGER_ALL_OFFSET                           0x0000000c
#define ADD_FRAME_CMD_3_TRIGGER_ALL_LSB                              20
#define ADD_FRAME_CMD_3_TRIGGER_ALL_MASK                             0x00100000

/* Description		ADD_FRAME_CMD_3_RESERVED_3
			
			FW will set to 0, MAC will ignore.  <legal 0>
*/
#define ADD_FRAME_CMD_3_RESERVED_3_OFFSET                            0x0000000c
#define ADD_FRAME_CMD_3_RESERVED_3_LSB                               21
#define ADD_FRAME_CMD_3_RESERVED_3_MASK                              0xffe00000


#endif // _ADD_FRAME_CMD_H_
