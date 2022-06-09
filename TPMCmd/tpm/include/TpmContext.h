/*
 * Copyright (c) 2022 Intel Corporation
 * SPDX-License-Identifier: BSD-2-Clause-Patent
 */

#ifndef TPM_CONTEXT_H
#define TPM_CONTEXT_H

#define MAX_TPM_CONTEXT_COUNT   16

void
SwitchTpmContext(
    uint32_t  contextId
);

#endif