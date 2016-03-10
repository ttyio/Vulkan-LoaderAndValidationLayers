// This file is generated.
#include "vulkan_wrapper.h"
#include <dlfcn.h>

int InitVulkan(void) {
    void* libvulkan = dlopen("libvulkan.so", RTLD_NOW | RTLD_LOCAL);
    if (!libvulkan)
        return 0;

    // Vulkan supported, set function addresses
    vkCreateInstance = reinterpret_cast<PFN_vkCreateInstance>(dlsym(libvulkan, "vkCreateInstance"));
    vkDestroyInstance = reinterpret_cast<PFN_vkDestroyInstance>(dlsym(libvulkan, "vkDestroyInstance"));
    vkEnumeratePhysicalDevices = reinterpret_cast<PFN_vkEnumeratePhysicalDevices>(dlsym(libvulkan, "vkEnumeratePhysicalDevices"));
    vkGetPhysicalDeviceFeatures = reinterpret_cast<PFN_vkGetPhysicalDeviceFeatures>(dlsym(libvulkan, "vkGetPhysicalDeviceFeatures"));
    vkGetPhysicalDeviceFormatProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceFormatProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceFormatProperties"));
    vkGetPhysicalDeviceImageFormatProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceImageFormatProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceImageFormatProperties"));
    vkGetPhysicalDeviceProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceProperties"));
    vkGetPhysicalDeviceQueueFamilyProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceQueueFamilyProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceQueueFamilyProperties"));
    vkGetPhysicalDeviceMemoryProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceMemoryProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceMemoryProperties"));
    vkGetInstanceProcAddr = reinterpret_cast<PFN_vkGetInstanceProcAddr>(dlsym(libvulkan, "vkGetInstanceProcAddr"));
    vkGetDeviceProcAddr = reinterpret_cast<PFN_vkGetDeviceProcAddr>(dlsym(libvulkan, "vkGetDeviceProcAddr"));
    vkCreateDevice = reinterpret_cast<PFN_vkCreateDevice>(dlsym(libvulkan, "vkCreateDevice"));
    vkDestroyDevice = reinterpret_cast<PFN_vkDestroyDevice>(dlsym(libvulkan, "vkDestroyDevice"));
    vkEnumerateInstanceExtensionProperties = reinterpret_cast<PFN_vkEnumerateInstanceExtensionProperties>(dlsym(libvulkan, "vkEnumerateInstanceExtensionProperties"));
    vkEnumerateDeviceExtensionProperties = reinterpret_cast<PFN_vkEnumerateDeviceExtensionProperties>(dlsym(libvulkan, "vkEnumerateDeviceExtensionProperties"));
    vkEnumerateInstanceLayerProperties = reinterpret_cast<PFN_vkEnumerateInstanceLayerProperties>(dlsym(libvulkan, "vkEnumerateInstanceLayerProperties"));
    vkEnumerateDeviceLayerProperties = reinterpret_cast<PFN_vkEnumerateDeviceLayerProperties>(dlsym(libvulkan, "vkEnumerateDeviceLayerProperties"));
    vkGetDeviceQueue = reinterpret_cast<PFN_vkGetDeviceQueue>(dlsym(libvulkan, "vkGetDeviceQueue"));
    vkQueueSubmit = reinterpret_cast<PFN_vkQueueSubmit>(dlsym(libvulkan, "vkQueueSubmit"));
    vkQueueWaitIdle = reinterpret_cast<PFN_vkQueueWaitIdle>(dlsym(libvulkan, "vkQueueWaitIdle"));
    vkDeviceWaitIdle = reinterpret_cast<PFN_vkDeviceWaitIdle>(dlsym(libvulkan, "vkDeviceWaitIdle"));
    vkAllocateMemory = reinterpret_cast<PFN_vkAllocateMemory>(dlsym(libvulkan, "vkAllocateMemory"));
    vkFreeMemory = reinterpret_cast<PFN_vkFreeMemory>(dlsym(libvulkan, "vkFreeMemory"));
    vkMapMemory = reinterpret_cast<PFN_vkMapMemory>(dlsym(libvulkan, "vkMapMemory"));
    vkUnmapMemory = reinterpret_cast<PFN_vkUnmapMemory>(dlsym(libvulkan, "vkUnmapMemory"));
    vkFlushMappedMemoryRanges = reinterpret_cast<PFN_vkFlushMappedMemoryRanges>(dlsym(libvulkan, "vkFlushMappedMemoryRanges"));
    vkInvalidateMappedMemoryRanges = reinterpret_cast<PFN_vkInvalidateMappedMemoryRanges>(dlsym(libvulkan, "vkInvalidateMappedMemoryRanges"));
    vkGetDeviceMemoryCommitment = reinterpret_cast<PFN_vkGetDeviceMemoryCommitment>(dlsym(libvulkan, "vkGetDeviceMemoryCommitment"));
    vkBindBufferMemory = reinterpret_cast<PFN_vkBindBufferMemory>(dlsym(libvulkan, "vkBindBufferMemory"));
    vkBindImageMemory = reinterpret_cast<PFN_vkBindImageMemory>(dlsym(libvulkan, "vkBindImageMemory"));
    vkGetBufferMemoryRequirements = reinterpret_cast<PFN_vkGetBufferMemoryRequirements>(dlsym(libvulkan, "vkGetBufferMemoryRequirements"));
    vkGetImageMemoryRequirements = reinterpret_cast<PFN_vkGetImageMemoryRequirements>(dlsym(libvulkan, "vkGetImageMemoryRequirements"));
    vkGetImageSparseMemoryRequirements = reinterpret_cast<PFN_vkGetImageSparseMemoryRequirements>(dlsym(libvulkan, "vkGetImageSparseMemoryRequirements"));
    vkGetPhysicalDeviceSparseImageFormatProperties = reinterpret_cast<PFN_vkGetPhysicalDeviceSparseImageFormatProperties>(dlsym(libvulkan, "vkGetPhysicalDeviceSparseImageFormatProperties"));
    vkQueueBindSparse = reinterpret_cast<PFN_vkQueueBindSparse>(dlsym(libvulkan, "vkQueueBindSparse"));
    vkCreateFence = reinterpret_cast<PFN_vkCreateFence>(dlsym(libvulkan, "vkCreateFence"));
    vkDestroyFence = reinterpret_cast<PFN_vkDestroyFence>(dlsym(libvulkan, "vkDestroyFence"));
    vkResetFences = reinterpret_cast<PFN_vkResetFences>(dlsym(libvulkan, "vkResetFences"));
    vkGetFenceStatus = reinterpret_cast<PFN_vkGetFenceStatus>(dlsym(libvulkan, "vkGetFenceStatus"));
    vkWaitForFences = reinterpret_cast<PFN_vkWaitForFences>(dlsym(libvulkan, "vkWaitForFences"));
    vkCreateSemaphore = reinterpret_cast<PFN_vkCreateSemaphore>(dlsym(libvulkan, "vkCreateSemaphore"));
    vkDestroySemaphore = reinterpret_cast<PFN_vkDestroySemaphore>(dlsym(libvulkan, "vkDestroySemaphore"));
    vkCreateEvent = reinterpret_cast<PFN_vkCreateEvent>(dlsym(libvulkan, "vkCreateEvent"));
    vkDestroyEvent = reinterpret_cast<PFN_vkDestroyEvent>(dlsym(libvulkan, "vkDestroyEvent"));
    vkGetEventStatus = reinterpret_cast<PFN_vkGetEventStatus>(dlsym(libvulkan, "vkGetEventStatus"));
    vkSetEvent = reinterpret_cast<PFN_vkSetEvent>(dlsym(libvulkan, "vkSetEvent"));
    vkResetEvent = reinterpret_cast<PFN_vkResetEvent>(dlsym(libvulkan, "vkResetEvent"));
    vkCreateQueryPool = reinterpret_cast<PFN_vkCreateQueryPool>(dlsym(libvulkan, "vkCreateQueryPool"));
    vkDestroyQueryPool = reinterpret_cast<PFN_vkDestroyQueryPool>(dlsym(libvulkan, "vkDestroyQueryPool"));
    vkGetQueryPoolResults = reinterpret_cast<PFN_vkGetQueryPoolResults>(dlsym(libvulkan, "vkGetQueryPoolResults"));
    vkCreateBuffer = reinterpret_cast<PFN_vkCreateBuffer>(dlsym(libvulkan, "vkCreateBuffer"));
    vkDestroyBuffer = reinterpret_cast<PFN_vkDestroyBuffer>(dlsym(libvulkan, "vkDestroyBuffer"));
    vkCreateBufferView = reinterpret_cast<PFN_vkCreateBufferView>(dlsym(libvulkan, "vkCreateBufferView"));
    vkDestroyBufferView = reinterpret_cast<PFN_vkDestroyBufferView>(dlsym(libvulkan, "vkDestroyBufferView"));
    vkCreateImage = reinterpret_cast<PFN_vkCreateImage>(dlsym(libvulkan, "vkCreateImage"));
    vkDestroyImage = reinterpret_cast<PFN_vkDestroyImage>(dlsym(libvulkan, "vkDestroyImage"));
    vkGetImageSubresourceLayout = reinterpret_cast<PFN_vkGetImageSubresourceLayout>(dlsym(libvulkan, "vkGetImageSubresourceLayout"));
    vkCreateImageView = reinterpret_cast<PFN_vkCreateImageView>(dlsym(libvulkan, "vkCreateImageView"));
    vkDestroyImageView = reinterpret_cast<PFN_vkDestroyImageView>(dlsym(libvulkan, "vkDestroyImageView"));
    vkCreateShaderModule = reinterpret_cast<PFN_vkCreateShaderModule>(dlsym(libvulkan, "vkCreateShaderModule"));
    vkDestroyShaderModule = reinterpret_cast<PFN_vkDestroyShaderModule>(dlsym(libvulkan, "vkDestroyShaderModule"));
    vkCreatePipelineCache = reinterpret_cast<PFN_vkCreatePipelineCache>(dlsym(libvulkan, "vkCreatePipelineCache"));
    vkDestroyPipelineCache = reinterpret_cast<PFN_vkDestroyPipelineCache>(dlsym(libvulkan, "vkDestroyPipelineCache"));
    vkGetPipelineCacheData = reinterpret_cast<PFN_vkGetPipelineCacheData>(dlsym(libvulkan, "vkGetPipelineCacheData"));
    vkMergePipelineCaches = reinterpret_cast<PFN_vkMergePipelineCaches>(dlsym(libvulkan, "vkMergePipelineCaches"));
    vkCreateGraphicsPipelines = reinterpret_cast<PFN_vkCreateGraphicsPipelines>(dlsym(libvulkan, "vkCreateGraphicsPipelines"));
    vkCreateComputePipelines = reinterpret_cast<PFN_vkCreateComputePipelines>(dlsym(libvulkan, "vkCreateComputePipelines"));
    vkDestroyPipeline = reinterpret_cast<PFN_vkDestroyPipeline>(dlsym(libvulkan, "vkDestroyPipeline"));
    vkCreatePipelineLayout = reinterpret_cast<PFN_vkCreatePipelineLayout>(dlsym(libvulkan, "vkCreatePipelineLayout"));
    vkDestroyPipelineLayout = reinterpret_cast<PFN_vkDestroyPipelineLayout>(dlsym(libvulkan, "vkDestroyPipelineLayout"));
    vkCreateSampler = reinterpret_cast<PFN_vkCreateSampler>(dlsym(libvulkan, "vkCreateSampler"));
    vkDestroySampler = reinterpret_cast<PFN_vkDestroySampler>(dlsym(libvulkan, "vkDestroySampler"));
    vkCreateDescriptorSetLayout = reinterpret_cast<PFN_vkCreateDescriptorSetLayout>(dlsym(libvulkan, "vkCreateDescriptorSetLayout"));
    vkDestroyDescriptorSetLayout = reinterpret_cast<PFN_vkDestroyDescriptorSetLayout>(dlsym(libvulkan, "vkDestroyDescriptorSetLayout"));
    vkCreateDescriptorPool = reinterpret_cast<PFN_vkCreateDescriptorPool>(dlsym(libvulkan, "vkCreateDescriptorPool"));
    vkDestroyDescriptorPool = reinterpret_cast<PFN_vkDestroyDescriptorPool>(dlsym(libvulkan, "vkDestroyDescriptorPool"));
    vkResetDescriptorPool = reinterpret_cast<PFN_vkResetDescriptorPool>(dlsym(libvulkan, "vkResetDescriptorPool"));
    vkAllocateDescriptorSets = reinterpret_cast<PFN_vkAllocateDescriptorSets>(dlsym(libvulkan, "vkAllocateDescriptorSets"));
    vkFreeDescriptorSets = reinterpret_cast<PFN_vkFreeDescriptorSets>(dlsym(libvulkan, "vkFreeDescriptorSets"));
    vkUpdateDescriptorSets = reinterpret_cast<PFN_vkUpdateDescriptorSets>(dlsym(libvulkan, "vkUpdateDescriptorSets"));
    vkCreateFramebuffer = reinterpret_cast<PFN_vkCreateFramebuffer>(dlsym(libvulkan, "vkCreateFramebuffer"));
    vkDestroyFramebuffer = reinterpret_cast<PFN_vkDestroyFramebuffer>(dlsym(libvulkan, "vkDestroyFramebuffer"));
    vkCreateRenderPass = reinterpret_cast<PFN_vkCreateRenderPass>(dlsym(libvulkan, "vkCreateRenderPass"));
    vkDestroyRenderPass = reinterpret_cast<PFN_vkDestroyRenderPass>(dlsym(libvulkan, "vkDestroyRenderPass"));
    vkGetRenderAreaGranularity = reinterpret_cast<PFN_vkGetRenderAreaGranularity>(dlsym(libvulkan, "vkGetRenderAreaGranularity"));
    vkCreateCommandPool = reinterpret_cast<PFN_vkCreateCommandPool>(dlsym(libvulkan, "vkCreateCommandPool"));
    vkDestroyCommandPool = reinterpret_cast<PFN_vkDestroyCommandPool>(dlsym(libvulkan, "vkDestroyCommandPool"));
    vkResetCommandPool = reinterpret_cast<PFN_vkResetCommandPool>(dlsym(libvulkan, "vkResetCommandPool"));
    vkAllocateCommandBuffers = reinterpret_cast<PFN_vkAllocateCommandBuffers>(dlsym(libvulkan, "vkAllocateCommandBuffers"));
    vkFreeCommandBuffers = reinterpret_cast<PFN_vkFreeCommandBuffers>(dlsym(libvulkan, "vkFreeCommandBuffers"));
    vkBeginCommandBuffer = reinterpret_cast<PFN_vkBeginCommandBuffer>(dlsym(libvulkan, "vkBeginCommandBuffer"));
    vkEndCommandBuffer = reinterpret_cast<PFN_vkEndCommandBuffer>(dlsym(libvulkan, "vkEndCommandBuffer"));
    vkResetCommandBuffer = reinterpret_cast<PFN_vkResetCommandBuffer>(dlsym(libvulkan, "vkResetCommandBuffer"));
    vkCmdBindPipeline = reinterpret_cast<PFN_vkCmdBindPipeline>(dlsym(libvulkan, "vkCmdBindPipeline"));
    vkCmdSetViewport = reinterpret_cast<PFN_vkCmdSetViewport>(dlsym(libvulkan, "vkCmdSetViewport"));
    vkCmdSetScissor = reinterpret_cast<PFN_vkCmdSetScissor>(dlsym(libvulkan, "vkCmdSetScissor"));
    vkCmdSetLineWidth = reinterpret_cast<PFN_vkCmdSetLineWidth>(dlsym(libvulkan, "vkCmdSetLineWidth"));
    vkCmdSetDepthBias = reinterpret_cast<PFN_vkCmdSetDepthBias>(dlsym(libvulkan, "vkCmdSetDepthBias"));
    vkCmdSetBlendConstants = reinterpret_cast<PFN_vkCmdSetBlendConstants>(dlsym(libvulkan, "vkCmdSetBlendConstants"));
    vkCmdSetDepthBounds = reinterpret_cast<PFN_vkCmdSetDepthBounds>(dlsym(libvulkan, "vkCmdSetDepthBounds"));
    vkCmdSetStencilCompareMask = reinterpret_cast<PFN_vkCmdSetStencilCompareMask>(dlsym(libvulkan, "vkCmdSetStencilCompareMask"));
    vkCmdSetStencilWriteMask = reinterpret_cast<PFN_vkCmdSetStencilWriteMask>(dlsym(libvulkan, "vkCmdSetStencilWriteMask"));
    vkCmdSetStencilReference = reinterpret_cast<PFN_vkCmdSetStencilReference>(dlsym(libvulkan, "vkCmdSetStencilReference"));
    vkCmdBindDescriptorSets = reinterpret_cast<PFN_vkCmdBindDescriptorSets>(dlsym(libvulkan, "vkCmdBindDescriptorSets"));
    vkCmdBindIndexBuffer = reinterpret_cast<PFN_vkCmdBindIndexBuffer>(dlsym(libvulkan, "vkCmdBindIndexBuffer"));
    vkCmdBindVertexBuffers = reinterpret_cast<PFN_vkCmdBindVertexBuffers>(dlsym(libvulkan, "vkCmdBindVertexBuffers"));
    vkCmdDraw = reinterpret_cast<PFN_vkCmdDraw>(dlsym(libvulkan, "vkCmdDraw"));
    vkCmdDrawIndexed = reinterpret_cast<PFN_vkCmdDrawIndexed>(dlsym(libvulkan, "vkCmdDrawIndexed"));
    vkCmdDrawIndirect = reinterpret_cast<PFN_vkCmdDrawIndirect>(dlsym(libvulkan, "vkCmdDrawIndirect"));
    vkCmdDrawIndexedIndirect = reinterpret_cast<PFN_vkCmdDrawIndexedIndirect>(dlsym(libvulkan, "vkCmdDrawIndexedIndirect"));
    vkCmdDispatch = reinterpret_cast<PFN_vkCmdDispatch>(dlsym(libvulkan, "vkCmdDispatch"));
    vkCmdDispatchIndirect = reinterpret_cast<PFN_vkCmdDispatchIndirect>(dlsym(libvulkan, "vkCmdDispatchIndirect"));
    vkCmdCopyBuffer = reinterpret_cast<PFN_vkCmdCopyBuffer>(dlsym(libvulkan, "vkCmdCopyBuffer"));
    vkCmdCopyImage = reinterpret_cast<PFN_vkCmdCopyImage>(dlsym(libvulkan, "vkCmdCopyImage"));
    vkCmdBlitImage = reinterpret_cast<PFN_vkCmdBlitImage>(dlsym(libvulkan, "vkCmdBlitImage"));
    vkCmdCopyBufferToImage = reinterpret_cast<PFN_vkCmdCopyBufferToImage>(dlsym(libvulkan, "vkCmdCopyBufferToImage"));
    vkCmdCopyImageToBuffer = reinterpret_cast<PFN_vkCmdCopyImageToBuffer>(dlsym(libvulkan, "vkCmdCopyImageToBuffer"));
    vkCmdUpdateBuffer = reinterpret_cast<PFN_vkCmdUpdateBuffer>(dlsym(libvulkan, "vkCmdUpdateBuffer"));
    vkCmdFillBuffer = reinterpret_cast<PFN_vkCmdFillBuffer>(dlsym(libvulkan, "vkCmdFillBuffer"));
    vkCmdClearColorImage = reinterpret_cast<PFN_vkCmdClearColorImage>(dlsym(libvulkan, "vkCmdClearColorImage"));
    vkCmdClearDepthStencilImage = reinterpret_cast<PFN_vkCmdClearDepthStencilImage>(dlsym(libvulkan, "vkCmdClearDepthStencilImage"));
    vkCmdClearAttachments = reinterpret_cast<PFN_vkCmdClearAttachments>(dlsym(libvulkan, "vkCmdClearAttachments"));
    vkCmdResolveImage = reinterpret_cast<PFN_vkCmdResolveImage>(dlsym(libvulkan, "vkCmdResolveImage"));
    vkCmdSetEvent = reinterpret_cast<PFN_vkCmdSetEvent>(dlsym(libvulkan, "vkCmdSetEvent"));
    vkCmdResetEvent = reinterpret_cast<PFN_vkCmdResetEvent>(dlsym(libvulkan, "vkCmdResetEvent"));
    vkCmdWaitEvents = reinterpret_cast<PFN_vkCmdWaitEvents>(dlsym(libvulkan, "vkCmdWaitEvents"));
    vkCmdPipelineBarrier = reinterpret_cast<PFN_vkCmdPipelineBarrier>(dlsym(libvulkan, "vkCmdPipelineBarrier"));
    vkCmdBeginQuery = reinterpret_cast<PFN_vkCmdBeginQuery>(dlsym(libvulkan, "vkCmdBeginQuery"));
    vkCmdEndQuery = reinterpret_cast<PFN_vkCmdEndQuery>(dlsym(libvulkan, "vkCmdEndQuery"));
    vkCmdResetQueryPool = reinterpret_cast<PFN_vkCmdResetQueryPool>(dlsym(libvulkan, "vkCmdResetQueryPool"));
    vkCmdWriteTimestamp = reinterpret_cast<PFN_vkCmdWriteTimestamp>(dlsym(libvulkan, "vkCmdWriteTimestamp"));
    vkCmdCopyQueryPoolResults = reinterpret_cast<PFN_vkCmdCopyQueryPoolResults>(dlsym(libvulkan, "vkCmdCopyQueryPoolResults"));
    vkCmdPushConstants = reinterpret_cast<PFN_vkCmdPushConstants>(dlsym(libvulkan, "vkCmdPushConstants"));
    vkCmdBeginRenderPass = reinterpret_cast<PFN_vkCmdBeginRenderPass>(dlsym(libvulkan, "vkCmdBeginRenderPass"));
    vkCmdNextSubpass = reinterpret_cast<PFN_vkCmdNextSubpass>(dlsym(libvulkan, "vkCmdNextSubpass"));
    vkCmdEndRenderPass = reinterpret_cast<PFN_vkCmdEndRenderPass>(dlsym(libvulkan, "vkCmdEndRenderPass"));
    vkCmdExecuteCommands = reinterpret_cast<PFN_vkCmdExecuteCommands>(dlsym(libvulkan, "vkCmdExecuteCommands"));
    vkDestroySurfaceKHR = reinterpret_cast<PFN_vkDestroySurfaceKHR>(dlsym(libvulkan, "vkDestroySurfaceKHR"));
    vkGetPhysicalDeviceSurfaceSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceSurfaceSupportKHR"));
    vkGetPhysicalDeviceSurfaceCapabilitiesKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR"));
    vkGetPhysicalDeviceSurfaceFormatsKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceSurfaceFormatsKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceSurfaceFormatsKHR"));
    vkGetPhysicalDeviceSurfacePresentModesKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceSurfacePresentModesKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceSurfacePresentModesKHR"));
    vkCreateSwapchainKHR = reinterpret_cast<PFN_vkCreateSwapchainKHR>(dlsym(libvulkan, "vkCreateSwapchainKHR"));
    vkDestroySwapchainKHR = reinterpret_cast<PFN_vkDestroySwapchainKHR>(dlsym(libvulkan, "vkDestroySwapchainKHR"));
    vkGetSwapchainImagesKHR = reinterpret_cast<PFN_vkGetSwapchainImagesKHR>(dlsym(libvulkan, "vkGetSwapchainImagesKHR"));
    vkAcquireNextImageKHR = reinterpret_cast<PFN_vkAcquireNextImageKHR>(dlsym(libvulkan, "vkAcquireNextImageKHR"));
    vkQueuePresentKHR = reinterpret_cast<PFN_vkQueuePresentKHR>(dlsym(libvulkan, "vkQueuePresentKHR"));
    vkGetPhysicalDeviceDisplayPropertiesKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayPropertiesKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceDisplayPropertiesKHR"));
    vkGetPhysicalDeviceDisplayPlanePropertiesKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR"));
    vkGetDisplayPlaneSupportedDisplaysKHR = reinterpret_cast<PFN_vkGetDisplayPlaneSupportedDisplaysKHR>(dlsym(libvulkan, "vkGetDisplayPlaneSupportedDisplaysKHR"));
    vkGetDisplayModePropertiesKHR = reinterpret_cast<PFN_vkGetDisplayModePropertiesKHR>(dlsym(libvulkan, "vkGetDisplayModePropertiesKHR"));
    vkCreateDisplayModeKHR = reinterpret_cast<PFN_vkCreateDisplayModeKHR>(dlsym(libvulkan, "vkCreateDisplayModeKHR"));
    vkGetDisplayPlaneCapabilitiesKHR = reinterpret_cast<PFN_vkGetDisplayPlaneCapabilitiesKHR>(dlsym(libvulkan, "vkGetDisplayPlaneCapabilitiesKHR"));
    vkCreateDisplayPlaneSurfaceKHR = reinterpret_cast<PFN_vkCreateDisplayPlaneSurfaceKHR>(dlsym(libvulkan, "vkCreateDisplayPlaneSurfaceKHR"));
    vkCreateSharedSwapchainsKHR = reinterpret_cast<PFN_vkCreateSharedSwapchainsKHR>(dlsym(libvulkan, "vkCreateSharedSwapchainsKHR"));

#ifdef VK_USE_PLATFORM_XLIB_KHR
    vkCreateXlibSurfaceKHR = reinterpret_cast<PFN_vkCreateXlibSurfaceKHR>(dlsym(libvulkan, "vkCreateXlibSurfaceKHR"));
    vkGetPhysicalDeviceXlibPresentationSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceXlibPresentationSupportKHR"));
#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
    vkCreateXcbSurfaceKHR = reinterpret_cast<PFN_vkCreateXcbSurfaceKHR>(dlsym(libvulkan, "vkCreateXcbSurfaceKHR"));
    vkGetPhysicalDeviceXcbPresentationSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceXcbPresentationSupportKHR"));
#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
    vkCreateWaylandSurfaceKHR = reinterpret_cast<PFN_vkCreateWaylandSurfaceKHR>(dlsym(libvulkan, "vkCreateWaylandSurfaceKHR"));
    vkGetPhysicalDeviceWaylandPresentationSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceWaylandPresentationSupportKHR"));
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
    vkCreateMirSurfaceKHR = reinterpret_cast<PFN_vkCreateMirSurfaceKHR>(dlsym(libvulkan, "vkCreateMirSurfaceKHR"));
    vkGetPhysicalDeviceMirPresentationSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceMirPresentationSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceMirPresentationSupportKHR"));
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
    vkCreateAndroidSurfaceKHR = reinterpret_cast<PFN_vkCreateAndroidSurfaceKHR>(dlsym(libvulkan, "vkCreateAndroidSurfaceKHR"));
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
    vkCreateWin32SurfaceKHR = reinterpret_cast<PFN_vkCreateWin32SurfaceKHR>(dlsym(libvulkan, "vkCreateWin32SurfaceKHR"));
    vkGetPhysicalDeviceWin32PresentationSupportKHR = reinterpret_cast<PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR>(dlsym(libvulkan, "vkGetPhysicalDeviceWin32PresentationSupportKHR"));
#endif
    return 1;
}

// No Vulkan support, do not set function addresses
PFN_vkCreateInstance __attribute ((visibility("hidden"))) vkCreateInstance;
PFN_vkDestroyInstance __attribute ((visibility("hidden"))) vkDestroyInstance;
PFN_vkEnumeratePhysicalDevices __attribute ((visibility("hidden"))) vkEnumeratePhysicalDevices;
PFN_vkGetPhysicalDeviceFeatures __attribute ((visibility("hidden"))) vkGetPhysicalDeviceFeatures;
PFN_vkGetPhysicalDeviceFormatProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceFormatProperties;
PFN_vkGetPhysicalDeviceImageFormatProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceImageFormatProperties;
PFN_vkGetPhysicalDeviceProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceProperties;
PFN_vkGetPhysicalDeviceQueueFamilyProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceQueueFamilyProperties;
PFN_vkGetPhysicalDeviceMemoryProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceMemoryProperties;
PFN_vkGetInstanceProcAddr __attribute ((visibility("hidden"))) vkGetInstanceProcAddr;
PFN_vkGetDeviceProcAddr __attribute ((visibility("hidden"))) vkGetDeviceProcAddr;
PFN_vkCreateDevice __attribute ((visibility("hidden"))) vkCreateDevice;
PFN_vkDestroyDevice __attribute ((visibility("hidden"))) vkDestroyDevice;
PFN_vkEnumerateInstanceExtensionProperties __attribute ((visibility("hidden"))) vkEnumerateInstanceExtensionProperties;
PFN_vkEnumerateDeviceExtensionProperties __attribute ((visibility("hidden"))) vkEnumerateDeviceExtensionProperties;
PFN_vkEnumerateInstanceLayerProperties __attribute ((visibility("hidden"))) vkEnumerateInstanceLayerProperties;
PFN_vkEnumerateDeviceLayerProperties __attribute ((visibility("hidden"))) vkEnumerateDeviceLayerProperties;
PFN_vkGetDeviceQueue __attribute ((visibility("hidden"))) vkGetDeviceQueue;
PFN_vkQueueSubmit __attribute ((visibility("hidden"))) vkQueueSubmit;
PFN_vkQueueWaitIdle __attribute ((visibility("hidden"))) vkQueueWaitIdle;
PFN_vkDeviceWaitIdle __attribute ((visibility("hidden"))) vkDeviceWaitIdle;
PFN_vkAllocateMemory __attribute ((visibility("hidden"))) vkAllocateMemory;
PFN_vkFreeMemory __attribute ((visibility("hidden"))) vkFreeMemory;
PFN_vkMapMemory __attribute ((visibility("hidden"))) vkMapMemory;
PFN_vkUnmapMemory __attribute ((visibility("hidden"))) vkUnmapMemory;
PFN_vkFlushMappedMemoryRanges __attribute ((visibility("hidden"))) vkFlushMappedMemoryRanges;
PFN_vkInvalidateMappedMemoryRanges __attribute ((visibility("hidden"))) vkInvalidateMappedMemoryRanges;
PFN_vkGetDeviceMemoryCommitment __attribute ((visibility("hidden"))) vkGetDeviceMemoryCommitment;
PFN_vkBindBufferMemory __attribute ((visibility("hidden"))) vkBindBufferMemory;
PFN_vkBindImageMemory __attribute ((visibility("hidden"))) vkBindImageMemory;
PFN_vkGetBufferMemoryRequirements __attribute ((visibility("hidden"))) vkGetBufferMemoryRequirements;
PFN_vkGetImageMemoryRequirements __attribute ((visibility("hidden"))) vkGetImageMemoryRequirements;
PFN_vkGetImageSparseMemoryRequirements __attribute ((visibility("hidden"))) vkGetImageSparseMemoryRequirements;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties __attribute ((visibility("hidden"))) vkGetPhysicalDeviceSparseImageFormatProperties;
PFN_vkQueueBindSparse __attribute ((visibility("hidden"))) vkQueueBindSparse;
PFN_vkCreateFence __attribute ((visibility("hidden"))) vkCreateFence;
PFN_vkDestroyFence __attribute ((visibility("hidden"))) vkDestroyFence;
PFN_vkResetFences __attribute ((visibility("hidden"))) vkResetFences;
PFN_vkGetFenceStatus __attribute ((visibility("hidden"))) vkGetFenceStatus;
PFN_vkWaitForFences __attribute ((visibility("hidden"))) vkWaitForFences;
PFN_vkCreateSemaphore __attribute ((visibility("hidden"))) vkCreateSemaphore;
PFN_vkDestroySemaphore __attribute ((visibility("hidden"))) vkDestroySemaphore;
PFN_vkCreateEvent __attribute ((visibility("hidden"))) vkCreateEvent;
PFN_vkDestroyEvent __attribute ((visibility("hidden"))) vkDestroyEvent;
PFN_vkGetEventStatus __attribute ((visibility("hidden"))) vkGetEventStatus;
PFN_vkSetEvent __attribute ((visibility("hidden"))) vkSetEvent;
PFN_vkResetEvent __attribute ((visibility("hidden"))) vkResetEvent;
PFN_vkCreateQueryPool __attribute ((visibility("hidden"))) vkCreateQueryPool;
PFN_vkDestroyQueryPool __attribute ((visibility("hidden"))) vkDestroyQueryPool;
PFN_vkGetQueryPoolResults __attribute ((visibility("hidden"))) vkGetQueryPoolResults;
PFN_vkCreateBuffer __attribute ((visibility("hidden"))) vkCreateBuffer;
PFN_vkDestroyBuffer __attribute ((visibility("hidden"))) vkDestroyBuffer;
PFN_vkCreateBufferView __attribute ((visibility("hidden"))) vkCreateBufferView;
PFN_vkDestroyBufferView __attribute ((visibility("hidden"))) vkDestroyBufferView;
PFN_vkCreateImage __attribute ((visibility("hidden"))) vkCreateImage;
PFN_vkDestroyImage __attribute ((visibility("hidden"))) vkDestroyImage;
PFN_vkGetImageSubresourceLayout __attribute ((visibility("hidden"))) vkGetImageSubresourceLayout;
PFN_vkCreateImageView __attribute ((visibility("hidden"))) vkCreateImageView;
PFN_vkDestroyImageView __attribute ((visibility("hidden"))) vkDestroyImageView;
PFN_vkCreateShaderModule __attribute ((visibility("hidden"))) vkCreateShaderModule;
PFN_vkDestroyShaderModule __attribute ((visibility("hidden"))) vkDestroyShaderModule;
PFN_vkCreatePipelineCache __attribute ((visibility("hidden"))) vkCreatePipelineCache;
PFN_vkDestroyPipelineCache __attribute ((visibility("hidden"))) vkDestroyPipelineCache;
PFN_vkGetPipelineCacheData __attribute ((visibility("hidden"))) vkGetPipelineCacheData;
PFN_vkMergePipelineCaches __attribute ((visibility("hidden"))) vkMergePipelineCaches;
PFN_vkCreateGraphicsPipelines __attribute ((visibility("hidden"))) vkCreateGraphicsPipelines;
PFN_vkCreateComputePipelines __attribute ((visibility("hidden"))) vkCreateComputePipelines;
PFN_vkDestroyPipeline __attribute ((visibility("hidden"))) vkDestroyPipeline;
PFN_vkCreatePipelineLayout __attribute ((visibility("hidden"))) vkCreatePipelineLayout;
PFN_vkDestroyPipelineLayout __attribute ((visibility("hidden"))) vkDestroyPipelineLayout;
PFN_vkCreateSampler __attribute ((visibility("hidden"))) vkCreateSampler;
PFN_vkDestroySampler __attribute ((visibility("hidden"))) vkDestroySampler;
PFN_vkCreateDescriptorSetLayout __attribute ((visibility("hidden"))) vkCreateDescriptorSetLayout;
PFN_vkDestroyDescriptorSetLayout __attribute ((visibility("hidden"))) vkDestroyDescriptorSetLayout;
PFN_vkCreateDescriptorPool __attribute ((visibility("hidden"))) vkCreateDescriptorPool;
PFN_vkDestroyDescriptorPool __attribute ((visibility("hidden"))) vkDestroyDescriptorPool;
PFN_vkResetDescriptorPool __attribute ((visibility("hidden"))) vkResetDescriptorPool;
PFN_vkAllocateDescriptorSets __attribute ((visibility("hidden"))) vkAllocateDescriptorSets;
PFN_vkFreeDescriptorSets __attribute ((visibility("hidden"))) vkFreeDescriptorSets;
PFN_vkUpdateDescriptorSets __attribute ((visibility("hidden"))) vkUpdateDescriptorSets;
PFN_vkCreateFramebuffer __attribute ((visibility("hidden"))) vkCreateFramebuffer;
PFN_vkDestroyFramebuffer __attribute ((visibility("hidden"))) vkDestroyFramebuffer;
PFN_vkCreateRenderPass __attribute ((visibility("hidden"))) vkCreateRenderPass;
PFN_vkDestroyRenderPass __attribute ((visibility("hidden"))) vkDestroyRenderPass;
PFN_vkGetRenderAreaGranularity __attribute ((visibility("hidden"))) vkGetRenderAreaGranularity;
PFN_vkCreateCommandPool __attribute ((visibility("hidden"))) vkCreateCommandPool;
PFN_vkDestroyCommandPool __attribute ((visibility("hidden"))) vkDestroyCommandPool;
PFN_vkResetCommandPool __attribute ((visibility("hidden"))) vkResetCommandPool;
PFN_vkAllocateCommandBuffers __attribute ((visibility("hidden"))) vkAllocateCommandBuffers;
PFN_vkFreeCommandBuffers __attribute ((visibility("hidden"))) vkFreeCommandBuffers;
PFN_vkBeginCommandBuffer __attribute ((visibility("hidden"))) vkBeginCommandBuffer;
PFN_vkEndCommandBuffer __attribute ((visibility("hidden"))) vkEndCommandBuffer;
PFN_vkResetCommandBuffer __attribute ((visibility("hidden"))) vkResetCommandBuffer;
PFN_vkCmdBindPipeline __attribute ((visibility("hidden"))) vkCmdBindPipeline;
PFN_vkCmdSetViewport __attribute ((visibility("hidden"))) vkCmdSetViewport;
PFN_vkCmdSetScissor __attribute ((visibility("hidden"))) vkCmdSetScissor;
PFN_vkCmdSetLineWidth __attribute ((visibility("hidden"))) vkCmdSetLineWidth;
PFN_vkCmdSetDepthBias __attribute ((visibility("hidden"))) vkCmdSetDepthBias;
PFN_vkCmdSetBlendConstants __attribute ((visibility("hidden"))) vkCmdSetBlendConstants;
PFN_vkCmdSetDepthBounds __attribute ((visibility("hidden"))) vkCmdSetDepthBounds;
PFN_vkCmdSetStencilCompareMask __attribute ((visibility("hidden"))) vkCmdSetStencilCompareMask;
PFN_vkCmdSetStencilWriteMask __attribute ((visibility("hidden"))) vkCmdSetStencilWriteMask;
PFN_vkCmdSetStencilReference __attribute ((visibility("hidden"))) vkCmdSetStencilReference;
PFN_vkCmdBindDescriptorSets __attribute ((visibility("hidden"))) vkCmdBindDescriptorSets;
PFN_vkCmdBindIndexBuffer __attribute ((visibility("hidden"))) vkCmdBindIndexBuffer;
PFN_vkCmdBindVertexBuffers __attribute ((visibility("hidden"))) vkCmdBindVertexBuffers;
PFN_vkCmdDraw __attribute ((visibility("hidden"))) vkCmdDraw;
PFN_vkCmdDrawIndexed __attribute ((visibility("hidden"))) vkCmdDrawIndexed;
PFN_vkCmdDrawIndirect __attribute ((visibility("hidden"))) vkCmdDrawIndirect;
PFN_vkCmdDrawIndexedIndirect __attribute ((visibility("hidden"))) vkCmdDrawIndexedIndirect;
PFN_vkCmdDispatch __attribute ((visibility("hidden"))) vkCmdDispatch;
PFN_vkCmdDispatchIndirect __attribute ((visibility("hidden"))) vkCmdDispatchIndirect;
PFN_vkCmdCopyBuffer __attribute ((visibility("hidden"))) vkCmdCopyBuffer;
PFN_vkCmdCopyImage __attribute ((visibility("hidden"))) vkCmdCopyImage;
PFN_vkCmdBlitImage __attribute ((visibility("hidden"))) vkCmdBlitImage;
PFN_vkCmdCopyBufferToImage __attribute ((visibility("hidden"))) vkCmdCopyBufferToImage;
PFN_vkCmdCopyImageToBuffer __attribute ((visibility("hidden"))) vkCmdCopyImageToBuffer;
PFN_vkCmdUpdateBuffer __attribute ((visibility("hidden"))) vkCmdUpdateBuffer;
PFN_vkCmdFillBuffer __attribute ((visibility("hidden"))) vkCmdFillBuffer;
PFN_vkCmdClearColorImage __attribute ((visibility("hidden"))) vkCmdClearColorImage;
PFN_vkCmdClearDepthStencilImage __attribute ((visibility("hidden"))) vkCmdClearDepthStencilImage;
PFN_vkCmdClearAttachments __attribute ((visibility("hidden"))) vkCmdClearAttachments;
PFN_vkCmdResolveImage __attribute ((visibility("hidden"))) vkCmdResolveImage;
PFN_vkCmdSetEvent __attribute ((visibility("hidden"))) vkCmdSetEvent;
PFN_vkCmdResetEvent __attribute ((visibility("hidden"))) vkCmdResetEvent;
PFN_vkCmdWaitEvents __attribute ((visibility("hidden"))) vkCmdWaitEvents;
PFN_vkCmdPipelineBarrier __attribute ((visibility("hidden"))) vkCmdPipelineBarrier;
PFN_vkCmdBeginQuery __attribute ((visibility("hidden"))) vkCmdBeginQuery;
PFN_vkCmdEndQuery __attribute ((visibility("hidden"))) vkCmdEndQuery;
PFN_vkCmdResetQueryPool __attribute ((visibility("hidden"))) vkCmdResetQueryPool;
PFN_vkCmdWriteTimestamp __attribute ((visibility("hidden"))) vkCmdWriteTimestamp;
PFN_vkCmdCopyQueryPoolResults __attribute ((visibility("hidden"))) vkCmdCopyQueryPoolResults;
PFN_vkCmdPushConstants __attribute ((visibility("hidden"))) vkCmdPushConstants;
PFN_vkCmdBeginRenderPass __attribute ((visibility("hidden"))) vkCmdBeginRenderPass;
PFN_vkCmdNextSubpass __attribute ((visibility("hidden"))) vkCmdNextSubpass;
PFN_vkCmdEndRenderPass __attribute ((visibility("hidden"))) vkCmdEndRenderPass;
PFN_vkCmdExecuteCommands __attribute ((visibility("hidden"))) vkCmdExecuteCommands;
PFN_vkDestroySurfaceKHR __attribute ((visibility("hidden"))) vkDestroySurfaceKHR;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceSurfaceSupportKHR;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceSurfaceCapabilitiesKHR;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceSurfaceFormatsKHR;
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceSurfacePresentModesKHR;
PFN_vkCreateSwapchainKHR __attribute ((visibility("hidden"))) vkCreateSwapchainKHR;
PFN_vkDestroySwapchainKHR __attribute ((visibility("hidden"))) vkDestroySwapchainKHR;
PFN_vkGetSwapchainImagesKHR __attribute ((visibility("hidden"))) vkGetSwapchainImagesKHR;
PFN_vkAcquireNextImageKHR __attribute ((visibility("hidden"))) vkAcquireNextImageKHR;
PFN_vkQueuePresentKHR __attribute ((visibility("hidden"))) vkQueuePresentKHR;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceDisplayPropertiesKHR;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR __attribute ((visibility("hidden"))) vkGetPhysicalDeviceDisplayPlanePropertiesKHR;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR __attribute ((visibility("hidden"))) vkGetDisplayPlaneSupportedDisplaysKHR;
PFN_vkGetDisplayModePropertiesKHR __attribute ((visibility("hidden"))) vkGetDisplayModePropertiesKHR;
PFN_vkCreateDisplayModeKHR __attribute ((visibility("hidden"))) vkCreateDisplayModeKHR;
PFN_vkGetDisplayPlaneCapabilitiesKHR __attribute ((visibility("hidden"))) vkGetDisplayPlaneCapabilitiesKHR;
PFN_vkCreateDisplayPlaneSurfaceKHR __attribute ((visibility("hidden"))) vkCreateDisplayPlaneSurfaceKHR;
PFN_vkCreateSharedSwapchainsKHR __attribute ((visibility("hidden"))) vkCreateSharedSwapchainsKHR;

#ifdef VK_USE_PLATFORM_XLIB_KHR
PFN_vkCreateXlibSurfaceKHR vkCreateXlibSurfaceKHR;
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR vkGetPhysicalDeviceXlibPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_XCB_KHR
PFN_vkCreateXcbSurfaceKHR vkCreateXcbSurfaceKHR;
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR vkGetPhysicalDeviceXcbPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_WAYLAND_KHR
PFN_vkCreateWaylandSurfaceKHR vkCreateWaylandSurfaceKHR;
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR vkGetPhysicalDeviceWaylandPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_MIR_KHR
PFN_vkCreateMirSurfaceKHR vkCreateMirSurfaceKHR;
PFN_vkGetPhysicalDeviceMirPresentationSupportKHR vkGetPhysicalDeviceMirPresentationSupportKHR;
#endif

#ifdef VK_USE_PLATFORM_ANDROID_KHR
PFN_vkCreateAndroidSurfaceKHR vkCreateAndroidSurfaceKHR;
#endif

#ifdef VK_USE_PLATFORM_WIN32_KHR
PFN_vkCreateWin32SurfaceKHR vkCreateWin32SurfaceKHR;
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR vkGetPhysicalDeviceWin32PresentationSupportKHR;
#endif
PFN_vkCreateDebugReportCallbackEXT vkCreateDebugReportCallbackEXT;
PFN_vkDestroyDebugReportCallbackEXT vkDestroyDebugReportCallbackEXT;
PFN_vkDebugReportMessageEXT vkDebugReportMessageEXT;

