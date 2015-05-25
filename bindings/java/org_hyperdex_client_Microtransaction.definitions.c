/* Copyright (c) 2015, Cornell University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of HyperDex nor the names of its contributors may be
 *       used to endorse or promote products derived from this software without
 *       specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* This file is generated by bindings/java.py */

#include "visibility.h"

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_put(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_put(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1add(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_add(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1sub(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_sub(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1mul(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_mul(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1div(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_div(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1and(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_and(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1or(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_or(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_string_1prepend(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_string_prepend(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_string_1append(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_string_append(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_list_1lpush(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_list_lpush(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_list_1rpush(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_list_rpush(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_document_1rename(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_document_rename(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_document_1unset(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_document_unset(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1min(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_min(client_ptr, uxact, _attrs, _attrs_sz);
}

JNIEXPORT HYPERDEX_API jint JNICALL
Java_org_hyperdex_client_Microtransaction_atomic_1max(JNIEnv* env , jobject microtransaction, jobject attributes)
{
    jobject client;
    struct hyperdex_client* client_ptr;
    struct hyperdex_client_microtransaction* uxact;
    const struct hyperdex_client_attribute *_attrs;
    struct hyperdex_ds_arena *arena;
    size_t _attrs_sz;

    client = hyperdex_uxact_get_client(env, microtransaction);
    client_ptr = hyperdex_uxact_get_client_ptr(env, microtransaction);
    uxact = hyperdex_uxact_get_uxact_ptr(env, microtransaction);
    arena = hyperdex_uxact_get_arena_ptr(env, microtransaction);
    hyperdex_java_client_convert_attributes(env, client, arena, attributes, &_attrs, &_attrs_sz);
    return (jint)hyperdex_client_uxact_atomic_max(client_ptr, uxact, _attrs, _attrs_sz);
}