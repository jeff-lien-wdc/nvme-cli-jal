/* SPDX-License-Identifier: GPL-2.0-or-later */
/* Copyright (c) 2022 Meta Platforms, Inc.
 *
 * Authors: Jeff Lien <jeff.lien@wdc.com>,
 */

#include "common.h"
#include "nvme.h"
#include "libnvme.h"
#include "plugin.h"
#include "linux/types.h"
#include "util/types.h"
#include "nvme-print.h"

#include "ocp-telemetry-decode.h"


void print_telemetry_fifo_event(__u8 class_type,
		__u16 id, __u8 size, __u8 *data)
{
	int j;
	const char *class_str = NULL;

	if (class_type) {
		class_str = telemetry_event_class_to_string(class_type);
		printf("%s Event : \n", class_str);
	}

	switch (class_type)	{
	case TELEMETRY_TIMESTAMP_CLASS:
		char time_str[40];
		uint64_t timestamp = (0x0000FFFFFFFFFFFF & le64_to_cpu(*(uint64_t *)data));
		memset((void *)time_str, 0, 9);
		sprintf((char *)time_str, "%04d:%02d:%02d", (int)(le64_to_cpu(timestamp)/3600),
				(int)((le64_to_cpu(timestamp%3600)/60)),
				(int)(le64_to_cpu(timestamp%60)));

		printf("  Event ID  : 0x%02x %s \n", id, telemetry_ts_event_to_string(id));
		printf("  Timestamp : %s \n", time_str);
		printf("  Size      : %d \n", size);
		if (size > 8) {
			printf("  VU Data : 0x");
			for (j = 8; j < size; j++)
				printf("%02x", data[j]);
			printf("\n\n");
		}
		break;
	case TELEMETRY_PCIE_CLASS:
		printf("  Event ID : 0x%02x %s\n", id, telemetry_pcie_event_id_to_string(id));
		printf("  State    : 0x%02x %s\n", data[0], telemetry_pcie_state_data_to_string(data[0]));
		printf("  Speed    : 0x%02x %s\n", data[1], telemetry_pcie_speed_data_to_string(data[1]));
		printf("  Width    : 0x%02x %s\n", data[2], telemetry_pcie_width_data_to_string(data[2]));
		if (size > 4) {
			printf("  VU Data : ");
			for (j = 4; j < size; j++)
				printf("%x", data[j]);
			printf("\n\n");
		}
		break;
	case TELEMETRY_NVME_CLASS:

		break;
	case TELEMETRY_RESET_CLASS:

		break;
	case TELEMETRY_BOOT_SEQ_CLASS:

		break;
	case TELEMETRY_FW_ASSERT_CLASS:

		break;
	case TELEMETRY_TEMPERATURE_CLASS:

		break;
	case TELEMETRY_MEDIA_DBG_CLASS:

		break;
	case TELEMETRY_MEDIA_WEAR_CLASS:

		break;
	case TELEMETRY_STAT_SNAPSHOT_CLASS:

		break;
	default:
		/*
		printf("Unknown Event Class Type\n");
		printf("Data : 0x");
		for (j = 0; j < size; j++)
			printf("%x", data[j]);
		printf("\n\n");
		*/
		break;
	}
}
