/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (c) 2025 Western Digital Corporation or its affiliates.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA  02110-1301, USA.
 *
 *   Author: Jeff Lien <jeff.lien@wdc.com>,
 */

int run_wdc_cloud_ssd_plugin_version(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_internal_fw_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_nand_stats(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_smart_add_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_clear_pcie_correctable_errors(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_drive_status(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_clear_assert_dump(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_drive_resize(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_fw_activate_history(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_clear_fw_activate_history(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_telemetry_controller_option(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_reason_identifier(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_log_page_directory(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_namespace_resize(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_drive_info(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_cloud_ssd_plugin_version(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_pcie_stats(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_get_latency_monitor_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_get_error_recovery_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_get_dev_capabilities_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_get_unsupported_reqs_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_cloud_boot_SSD_version(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_cloud_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_hw_rev_log(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_vs_device_waf(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

int run_wdc_set_latency_monitor_feature(int argc, char **argv,
		struct command *cmd,
		struct plugin *plugin);

int run_wdc_vs_temperature_stats(int argc, char **argv,
		struct command *command,
		struct plugin *plugin);

bool run_wdc_nvme_check_supported_log_page(nvme_root_t r,
		struct nvme_dev *dev,
		__u8 log_id);

__u32 run_wdc_get_fw_cust_id(nvme_root_t r,
		struct nvme_dev *dev);
