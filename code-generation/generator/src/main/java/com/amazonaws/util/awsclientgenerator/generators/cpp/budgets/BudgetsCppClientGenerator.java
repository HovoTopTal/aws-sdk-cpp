/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

package com.amazonaws.util.awsclientgenerator.generators.cpp.budgets;

import com.amazonaws.util.awsclientgenerator.domainmodels.codegeneration.ServiceModel;
import com.amazonaws.util.awsclientgenerator.generators.cpp.JsonCppClientGenerator;

import java.util.HashMap;
import java.util.Map;

public class BudgetsCppClientGenerator extends JsonCppClientGenerator {

    public BudgetsCppClientGenerator() throws Exception {
        super();
    }

    @Override
    protected Map<String, String> computeRegionEndpointsForService(final ServiceModel serviceModel) {
        Map<String, String> endpoints = new HashMap<>();
        endpoints.put("us-east-1", "budgets.amazonaws.com");

        return endpoints;
    }
}

