﻿/*
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

#include <aws/cloudformation/model/GetTemplateSummaryResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <utility>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils::Logging;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateSummaryResult::GetTemplateSummaryResult()
{
}

GetTemplateSummaryResult::GetTemplateSummaryResult(const AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetTemplateSummaryResult& GetTemplateSummaryResult::operator =(const AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode rootNode = xmlDocument.GetRootElement();
  XmlNode resultNode = rootNode;
  if (!rootNode.IsNull() && (rootNode.GetName() != "GetTemplateSummaryResult"))
  {
    resultNode = rootNode.FirstChild("GetTemplateSummaryResult");
  }

  if(!resultNode.IsNull())
  {
    XmlNode parametersNode = resultNode.FirstChild("Parameters");
    if(!parametersNode.IsNull())
    {
      XmlNode parametersMember = parametersNode.FirstChild("member");
      while(!parametersMember.IsNull())
      {
        m_parameters.push_back(parametersMember);
        parametersMember = parametersMember.NextNode("member");
      }

    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = StringUtils::Trim(descriptionNode.GetText().c_str());
    }
    XmlNode capabilitiesNode = resultNode.FirstChild("Capabilities");
    if(!capabilitiesNode.IsNull())
    {
      XmlNode capabilitiesMember = capabilitiesNode.FirstChild("member");
      while(!capabilitiesMember.IsNull())
      {
        m_capabilities.push_back(CapabilityMapper::GetCapabilityForName(StringUtils::Trim(capabilitiesMember.GetText().c_str())));
        capabilitiesMember = capabilitiesMember.NextNode("member");
      }

    }
    XmlNode capabilitiesReasonNode = resultNode.FirstChild("CapabilitiesReason");
    if(!capabilitiesReasonNode.IsNull())
    {
      m_capabilitiesReason = StringUtils::Trim(capabilitiesReasonNode.GetText().c_str());
    }
    XmlNode resourceTypesNode = resultNode.FirstChild("ResourceTypes");
    if(!resourceTypesNode.IsNull())
    {
      XmlNode resourceTypesMember = resourceTypesNode.FirstChild("member");
      while(!resourceTypesMember.IsNull())
      {
        m_resourceTypes.push_back(StringUtils::Trim(resourceTypesMember.GetText().c_str()));
        resourceTypesMember = resourceTypesMember.NextNode("member");
      }

    }
    XmlNode versionNode = resultNode.FirstChild("Version");
    if(!versionNode.IsNull())
    {
      m_version = StringUtils::Trim(versionNode.GetText().c_str());
    }
    XmlNode metadataNode = resultNode.FirstChild("Metadata");
    if(!metadataNode.IsNull())
    {
      m_metadata = StringUtils::Trim(metadataNode.GetText().c_str());
    }
    XmlNode declaredTransformsNode = resultNode.FirstChild("DeclaredTransforms");
    if(!declaredTransformsNode.IsNull())
    {
      XmlNode declaredTransformsMember = declaredTransformsNode.FirstChild("member");
      while(!declaredTransformsMember.IsNull())
      {
        m_declaredTransforms.push_back(StringUtils::Trim(declaredTransformsMember.GetText().c_str()));
        declaredTransformsMember = declaredTransformsMember.NextNode("member");
      }

    }
  }

  if (!rootNode.IsNull()) {
    XmlNode responseMetadataNode = rootNode.FirstChild("ResponseMetadata");
    m_responseMetadata = responseMetadataNode;
    AWS_LOGSTREAM_DEBUG("Aws::CloudFormation::Model::GetTemplateSummaryResult", "x-amzn-request-id: " << m_responseMetadata.GetRequestId() );
  }
  return *this;
}
