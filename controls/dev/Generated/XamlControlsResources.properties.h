// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class XamlControlsResourcesProperties
{
public:
    XamlControlsResourcesProperties();

    void UseCompactResources(bool value);
    bool UseCompactResources();

    static winrt::DependencyProperty UseCompactResourcesProperty() { return s_UseCompactResourcesProperty; }

    static GlobalDependencyProperty s_UseCompactResourcesProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnUseCompactResourcesPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
