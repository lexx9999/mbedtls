/* THIS FILE WAS AUTO-GENERATED BY psa_sim_generate.pl. DO NOT EDIT!! */

/*
 *  Copyright The Mbed TLS Contributors
 *  SPDX-License-Identifier: Apache-2.0 OR GPL-2.0-or-later
 */

#ifndef _PSA_FUNCTIONS_CODES_H_
#define  _PSA_FUNCTIONS_CODES_H_

enum {
    /* Start here to avoid overlap with PSA_IPC_CONNECT, PSA_IPC_DISCONNECT
     * and VERSION_REQUEST */
    PSA_CRYPTO_INIT = 100,
    PSA_AEAD_ABORT,
    PSA_AEAD_DECRYPT,
    PSA_AEAD_DECRYPT_SETUP,
    PSA_AEAD_ENCRYPT,
    PSA_AEAD_ENCRYPT_SETUP,
    PSA_AEAD_FINISH,
    PSA_AEAD_GENERATE_NONCE,
    PSA_AEAD_SET_LENGTHS,
    PSA_AEAD_SET_NONCE,
    PSA_AEAD_UPDATE,
    PSA_AEAD_UPDATE_AD,
    PSA_AEAD_VERIFY,
    PSA_CIPHER_ABORT,
    PSA_CIPHER_DECRYPT,
    PSA_CIPHER_DECRYPT_SETUP,
    PSA_CIPHER_ENCRYPT,
    PSA_CIPHER_ENCRYPT_SETUP,
    PSA_CIPHER_FINISH,
    PSA_CIPHER_GENERATE_IV,
    PSA_CIPHER_SET_IV,
    PSA_CIPHER_UPDATE,
    PSA_DESTROY_KEY,
    PSA_GENERATE_RANDOM,
    PSA_GET_KEY_ATTRIBUTES,
    PSA_HASH_ABORT,
    PSA_HASH_CLONE,
    PSA_HASH_COMPARE,
    PSA_HASH_COMPUTE,
    PSA_HASH_FINISH,
    PSA_HASH_SETUP,
    PSA_HASH_UPDATE,
    PSA_HASH_VERIFY,
    PSA_IMPORT_KEY,
    PSA_MAC_ABORT,
    PSA_MAC_COMPUTE,
    PSA_MAC_SIGN_FINISH,
    PSA_MAC_SIGN_SETUP,
    PSA_MAC_UPDATE,
    PSA_MAC_VERIFY,
    PSA_MAC_VERIFY_FINISH,
    PSA_MAC_VERIFY_SETUP,
};

#endif /*  _PSA_FUNCTIONS_CODES_H_ */
