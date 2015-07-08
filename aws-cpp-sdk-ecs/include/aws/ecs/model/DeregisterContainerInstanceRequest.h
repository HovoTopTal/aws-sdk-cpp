/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /*
  */
  class AWS_ECS_API DeregisterContainerInstanceRequest : public ECSRequest
  {
  public:
    DeregisterContainerInstanceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the container instance you want to deregister. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the container instance you want to deregister. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the container instance you want to deregister. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the container instance you want to deregister. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline DeregisterContainerInstanceRequest&  WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the container instance you want to deregister. If you do not specify a cluster, the default cluster is assumed.</p>
    */
    inline DeregisterContainerInstanceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /*
     <p>The container instance UUID or full Amazon Resource Name (ARN) of the container instance you want to deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by the region of the container instance, the AWS account ID of the container instance owner, the <code>container-instance</code> namespace, and then the container instance UUID. For example, arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_UUID</i>.</p>
    */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }
    /*
     <p>The container instance UUID or full Amazon Resource Name (ARN) of the container instance you want to deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by the region of the container instance, the AWS account ID of the container instance owner, the <code>container-instance</code> namespace, and then the container instance UUID. For example, arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_UUID</i>.</p>
    */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /*
     <p>The container instance UUID or full Amazon Resource Name (ARN) of the container instance you want to deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by the region of the container instance, the AWS account ID of the container instance owner, the <code>container-instance</code> namespace, and then the container instance UUID. For example, arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_UUID</i>.</p>
    */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /*
     <p>The container instance UUID or full Amazon Resource Name (ARN) of the container instance you want to deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by the region of the container instance, the AWS account ID of the container instance owner, the <code>container-instance</code> namespace, and then the container instance UUID. For example, arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_UUID</i>.</p>
    */
    inline DeregisterContainerInstanceRequest&  WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /*
     <p>The container instance UUID or full Amazon Resource Name (ARN) of the container instance you want to deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by the region of the container instance, the AWS account ID of the container instance owner, the <code>container-instance</code> namespace, and then the container instance UUID. For example, arn:aws:ecs:<i>region</i>:<i>aws_account_id</i>:container-instance/<i>container_instance_UUID</i>.</p>
    */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}

    /*
     <p>Force the deregistration of the container instance. You can use the <code>force</code> parameter if you have several tasks running on a container instance and you don't want to run <code>StopTask</code> for each task before deregistering the container instance.</p>
    */
    inline bool GetForce() const{ return m_force; }
    /*
     <p>Force the deregistration of the container instance. You can use the <code>force</code> parameter if you have several tasks running on a container instance and you don't want to run <code>StopTask</code> for each task before deregistering the container instance.</p>
    */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /*
     <p>Force the deregistration of the container instance. You can use the <code>force</code> parameter if you have several tasks running on a container instance and you don't want to run <code>StopTask</code> for each task before deregistering the container instance.</p>
    */
    inline DeregisterContainerInstanceRequest&  WithForce(bool value) { SetForce(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet;
    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws